# Emergency-Room
## Exercise description
Write a program that simulates queuing up patients in an emergency room. Only one patient can be assisted at a time (it is assumed that there is only one doctor available in the emergency room).
Each patient waits in a different queue (red, yellow or green) depending on the severity of the operation (red = very serious patient, yellow = severe patient, green = less severe patient).
Patients waiting in the red queue are cared for first; if the red queue is empty, all the patients waiting in the yellow queue are assisted and, finally, if the red and yellow queues are empty, the patients waiting in the green queue are assisted.
Each queue can accommodate up to 70 patients.

## Data Structure 
The data relating to each patient are as follows:
- Tax Code (16-character string).
- Surname (Utringa of 20 characters).
- Name (A 20-character string).
- Age (Integer greater than or equal to zero).

## Tasks
The program realizes the following functionalities:

- Queue a patient in the appropriate queue if there is space in the emergency room.
- Pick up a patient from the appropriate queue to start the visit, if the doctor is free.
- End a visit, freeing the doctor.
- Print the number of patients waiting for each queue, and calculate the sum.

## Given files
For the implementation of the application, the student has at his disposal:
- The design of the entire application, already defined in terms of files and prototypes of the functions to be implemented;
- Queue management functions (except the queuing function) which must be used without making any changes to them (neither to the prototypes nor to their provided implementation). Obviously, the missing function must be implemented by the student.

The files provided are as follows:

- info.h (not to be changed)
Contains the definition of the TInfo type and the prototypes of the functions for its management

- info.c (to be completed)
Contains the implementation of the functions for the management of TInfo

- queue.h (not to be modified)
Contains the definition of the TQueue type and the prototypes of the functions for the management of TQueue (standard functions)

- coda.c (to be completed)
Contains the implementation of the functions for the management of TQueue (standard functions)

- menu.h (not to be changed)
Contains prototypes of user interface functions.

- menu.c (not to be changed)
Contains the implementation of the user interface functions.

- patient_management.h (not to be modified)
Contains the prototypes of the functions required by the application:
> int queue_patiente (TQueue * red, TQueue * yellow, TQueue * green, int size);

- The function returns 1 if the patient is queued, 0 if there is no space in the emergency room.
> int patient_visit (TQueue * red, TQueue * yellow, TQueue * green, int size, bool * medicolibero);

- The function, if the doctor is free, extracts the patient to be examined, and sets the free medic variable to false; the function returns 1. If there are no free doctors or there are no patients in the queue, the function returns 0 without extracting any patients.
> int end_visit (bool * medicolibero);

- The function, if the doctor is busy, sets the free medic variable to true and returns 1, if the doctor is not busy it returns 0.
> int calculates_patients_ queued (TQueue red, TQueue yellow, TQueue green, int size);

- The function prints on the screen the number of patients waiting for each queue and returns the total number of patients in the emergency room queue.

- patient_management.c (to be completed)  
Contains the implementation of the functions required by the application

- patients.c (to be completed)  
Contains the main of the program.