const { Router } = require('express')
const UserController = require('./Controllers/UserController');

const router = Router()

router.post('/createUser', UserController.createUser);
router.get('/searchUser/:id', UserController.findUser);
router.get('/getUsers', UserController.getUsers);
router.post('/updateUser',UserController.updateUser);

module.exports = { router };