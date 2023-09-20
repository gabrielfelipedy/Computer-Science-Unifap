const { sign, verify } = require("jsonwebtoken")

const createTokens = (user) => {
  const acessToken = sign({ name: user.name, id: user.id}, "jwtsecret");

  return acessToken;
}

const validateToken = (req, res) => {
  const acessToken = req.cookies["acess-token"]

  if(!acessToken) {
    return res.status(404).json("Something went wrong")
  }

  try {
    const validToken = verify(acessToken, "jwtsecret")

    if(validToken) {
      req.authenticated = true;
    }
  } catch(err) {
    return res.status(404).json("error")
  }
}

module.exports = { createTokens, validateToken }