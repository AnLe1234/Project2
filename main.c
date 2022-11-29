//  Program that calculate and display total travel expenses of a businesspersion on a trip

//  function needed:
//      (int) total number of day
//      (String)  time of first departure/last arrival
//      (double) amount of round-trip airfare
//      (double) amount of car rentals
//      (double) miles driven if private vehicle used
//          (double) amount of expense $0.27 per mile
//      (double) parking fee
//          free first $6, payed by employee if more
//      (double) taxi fee
//          free first $10/day, payed by employee if more
//      (double) conference/seminar registration fee
//      (double) hotel expense
//          free $90/day, payed by employee if more
//      (double) amount of each meal
//          Condition:
//              First day of trip:
//                  Allow expense if:
//                      Breakfast < 7:00
//                      Lunch < 12:00
//                      Dinner < 18:00
//              Last day of trip:
//                  Allow expense if:
//                      Breakfast > 8:00
//                      Lunch > 13:00
//                      Dinner > 19:00

//  Validation:
//      No negative number on $ amount or miles driven
//      No day < 1
//      Accept only valid day and time departure/arrival

//  main()
//      Ask number of day (int)
//      loop (number of day):
//          if (day departure):
//              time departure
//              meal expense
//          else if (day arrival):
//              time arrival
//              meal expense
//          Ask:
//              amount rountrip airfare
//              amount of car rental
//              mile driven
//              amount parking fee
//              amount taxi fee
//              amount of conferene fee
//              amount of hotel expense
//              amount of meal eaten
//                  breakfast
//                  lunch
//                  dinner
//      Display:
//          Total expense
//          Total allowable
//          Amount of excess (if any)
//          Amount saved (if any)

//  Workload dividing:
//      1. Main
//      1. totalNumTrip,
