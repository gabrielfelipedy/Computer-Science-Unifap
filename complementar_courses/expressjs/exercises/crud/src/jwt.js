const { sign, verify } = require('jsonwebtoken')

function createTokens(user) {
  const acessToken = sign({ username: user.username, id: user.id }, process.env.SECRET_PSWD, {
    expiresIn: "20m"
  });

  return acessToken;
}

function validateToken(req, res, next) {
  const acessToken = req.cookies["acess-token"];

  if(!acessToken) {
    return res.status(401).json({ err: "There is no token" });
  }
  try {
    const validToken = verify(acessToken, process.env.SECRET_PSWD)

    if(validToken) {
      req.authenticated = true;
      return next();
    }
  }
  catch(err) {
    return res.status(403).json({err});
  }
}

module.exports = { createTokens, validateToken }
