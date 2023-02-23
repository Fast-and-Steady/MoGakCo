package org.example.counter;

public class Counter implements Runnable{
    private int count = 0;

    public void increment(){
        count++;
    }
    public void decrement(){
        count--;
    }
    public int getValue(){
        return count;
    }
    @Override
    public void run() {
        synchronized (this) {
            this.increment();
            System.out.println("value for thread After increment " + Thread.currentThread().getName() + " " + this.getValue());
            this.decrement();
            System.out.println("value for thread at last " + Thread.currentThread().getName() + " " + this.getValue());
        }
    }
}
