/*JSON SERVER API CONTROLLER*/

const jsonServer = require('json-server');
const server = jsonServer.create();
const router = jsonServer.router('db.json');
const middlewares = jsonServer.defaults();

const port = 3000;

server.use(middlewares)
server.use(router)
server.listen(3000, () => {
    console.log('Server Starting On ' + port)
})

/*
  API Controller
  Version: 1.0
  author: Daniel Quintero Henriquez
*/