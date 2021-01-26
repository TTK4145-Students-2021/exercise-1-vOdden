Exercise 1 - Theory questions
-----------------------------
 
 ### What is the difference between concurrency and parallelism?
 > Parallelism are unique tasks that are running at the same time, and concurrency are unique tasks that can start, run and complete in overlapping periods.
 
 ### Why have machines become increasingly multicore in the past decade?
 > Multicores allows the machines to run mutliple processes at the same time, which increases the performance of multitasking.
 
 ### Why do we divide software (programs) into concurrently executing parts (like threads or processes)?
 (Or phrased differently: What problems do concurrency help in solving?)
 > Concurrency improves the throughput and resource utilizaition.
 
 ### Does creating concurrent programs make the programmer's life easier? Harder? Maybe both?
 (Come back to this after you have worked on part 4 of this exercise)
 > *Your answer here*
 
 ### What is the conceptual difference between threads and processes?
 > A thread is a subset of processes, where processes executes an instance of a program.
   Processes run in the seperate memory space, and threads run in shared memeory space.
 
 ### Some languages support "fibers" (sometimes called "green threads") or "coroutines"? What are they?
 > Green threads are scheduled by a virtual machine.
   Coroutines may run for a little while, then get interrupted by an another routine, then     continue the firt routine again.
 
 ### What is the Go-language's "goroutine"? A C/POSIX "pthread"?
 > (?)
 
 ### In Go, what does `func GOMAXPROCS(n int) int` change? 
 > It limits the number of OS threads that can execute Go code at user-level simultaneously



 
 
 
 
