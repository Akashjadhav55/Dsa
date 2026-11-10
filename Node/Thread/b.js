// b.js - Worker Thread
const { workerData, parentPort, threadId } = require("worker_threads");

console.log(`${workerData.name} started | threadId: ${threadId}`);

// Simulate heavy work
let sum = 0;
for (let i = 0; i <= workerData.num * 100000000; i++) {
    sum += Math.sqrt(i) * Math.sin(i);
}

parentPort.postMessage(`${workerData.name} done | sum = ${sum}`);
