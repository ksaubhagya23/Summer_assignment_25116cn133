#include <stdio.h>

int main()
{
    int seats = 50, booked;

    printf("Available Seats: %d\n", seats);

    printf("Enter Number of Tickets: ");
    scanf("%d", &booked);

    if(booked <= seats)
    {
        seats -= booked;
        printf("Booking Successful\n");
        printf("Remaining Seats: %d\n", seats);
    }
    else
    {
        printf("Seats Not Available\n");
    }

    return 0;
}