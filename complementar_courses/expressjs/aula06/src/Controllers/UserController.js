const { PrismaClient } = require("@prisma/client")
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
    }
};