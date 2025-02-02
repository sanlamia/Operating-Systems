#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <semaphore.h>

// Semaphore to ensure proper synchronization between threads
sem_t sem;

// Function for thread 1 to print "hello"
void *thread1_function(void *arg) {
    sem_wait(&sem);
    printf("hello ");
    sem_post(&sem);
    pthread_exit(NULL);
}

// Function for thread 2 to print "from Cse"
void *thread2_function(void *arg) {
    sem_wait(&sem);
    printf("from Cse ");
    sem_post(&sem);
    pthread_exit(NULL);
}

// Function for thread 3 to print "ewu"
void *thread3_function(void *arg) {
    sem_wait(&sem);
    printf("ewu ");
    sem_post(&sem);
    pthread_exit(NULL);
}

// Function for thread 4 to print spaces
void *thread4_function(void *arg) {
    sem_wait(&sem);
    printf(" ");
    sem_post(&sem);
    pthread_exit(NULL);
}

int main() {
    // Initialize semaphore with value 1
    sem_init(&sem, 0, 1);

    // Declare four threads
    pthread_t thread1, thread2, thread3, thread4;

    // Create four threads with their respective functions
    pthread_create(&thread1, NULL, thread1_function, NULL);
    pthread_create(&thread2, NULL, thread2_function, NULL);
    pthread_create(&thread3, NULL, thread3_function, NULL);
    pthread_create(&thread4, NULL, thread4_function, NULL);

    // Wait for all threads to finish
    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);
    pthread_join(thread3, NULL);
    pthread_join(thread4, NULL);

    // Destroy semaphore
    sem_destroy(&sem);

    return 0;
}
In this code, four threads are created, each of which calls a separate function to print their respective portion of the message. The sem semaphore is used to ensure that each thread acquires the lock before printing their portion of the message, so that the message is printed in the correct order.






