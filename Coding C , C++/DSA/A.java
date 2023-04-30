class A extends Thread {
    public void run(){
   
    for(int i = 0 ; i < 10 ; i++){
    System.out.println("Thread goes on");
    try {
        if(i==6)Thread.sleep(1000);
        if(i==9)Thread.interrupt();
    } catch (Exception e) {
        System.out.println("Scheduled the thread for a 1000 mili seconds");
    }
    
    }
    
    }
    }
    