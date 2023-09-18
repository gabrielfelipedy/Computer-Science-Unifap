const { PrismaClient } = require("@prisma/client");
const prisma = new PrismaClient();

module.exports = {
    async createUser(req, res) {
        const { name, email } = req.body;
        try {
            const userExists = await prisma.user.findFirst({
                where: {
                    email
                }
            });
            if(userExists) {
                return res.json("This user has already created");
            } else {
                const user = await prisma.user.create({
                    data: {
                        email,
                        name
                    }
                });
                res.json({ Message: "User created" });
            }
        } catch(error) {
            res.json(error);
        }
    },
    async findUser(req, res) {
        const { id } = req.params;
    
        try {
            const user = await prisma.user.findUnique({
                where: { id: parseInt(id, 10)}
            });
            res.json(user);
        } catch (error) {
          res.json(error);
        }
    },
    async getUsers(req, res) {
        const users = await prisma.user.findMany()
        res.json(users);
    },
    async updateUser(req, res) {
        try {
            const { id } = req.params;
            const { name, email } = req.body

            const user = await prisma.user.findUnique({
                where: { id: parseInt(id, 10) }
            });

            if(!user) {
                return res.json({ error: "User doesn't exists" })
            }

            user = await prisma.user.update({
                where: { id: parseInt(id, 10) },
                data: { name, email },
                select: {
                    name: true,
                    email: true
                }
            });
            return res.json(user);

        } catch(error) {
            res.json(error);
        }
    }
};