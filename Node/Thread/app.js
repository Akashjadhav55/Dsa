// app.js - Main Thread
const { Worker } = require("worker_threads");

console.log(`Main thread running | PID: ${process.pid}`);

const workerB = new Worker("./b.js", { workerData: { name: "Worker-B", num: 5 } });
const workerC = new Worker("./c.js", { workerData: { name: "Worker-C", num: 10 } });

workerB.on("message", (msg) => console.log("Message from B:", msg));
workerC.on("message", (msg) => console.log("Message from C:", msg));

workerB.on("exit", () => console.log("Worker B finished"));
workerC.on("exit", () => console.log("Worker C finished"));
