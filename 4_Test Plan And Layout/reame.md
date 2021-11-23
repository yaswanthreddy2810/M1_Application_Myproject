## Test Plan

## High-Level Test Plan

| Test ID | Description | Exp I/P | Exp O/P | Actual Output | Type of Test |
| ------- | ----------- | ------- | ------- | ------------- | ------------ |
| HL_01 | Check if the user has entered correct login details | user | SUCCESS | SUCCESS | REQUIREMENT BASED |
| HL_02 | Check if the user has entered correct password details | pass | SUCCESS | SUCCESS  | REQUIREMENT BASED |
| HL_03 | Check if the user details entered is valid or not | click enter  | SUCCESS | login successfully |REQUIREMENT BASED |
| HL_04 | Check if parking information | (1) Arrival Of Vehicle (7) Exit | display the arrival of vehicles | SUCCESS | REQUIREMENT BASED |
| HL_05 | Check if parking information | (2) Total No. Of Vehicles Parked    | Display total number of vehicles are parked | SUCCESS | REQUIREMENT BASED |
| HL_06 | Check if parking information | (3) Total No. Of Cars Parked | Display total number of cars are parked| SUCCESS | TECHNICAL |
| HL_07 | Check if parking information | (4) Total No. Of Scooters Parked | Display total number of scooters are parked | SUCCESS | REQUIREMENT BASED |
| HL_08 | Check if parking information | (5) Display Vehicles Parked  | Display type of Vehicles Parked | SUCCESS | TECHNICAL |  
| HL_09 | Check if parking information | (6) Departure Of Vehicle   | Display when it will be exit from the parking area | SUCCESS | REQUIREMENT BASED |
| HL_10 | Check if parking information | (7) Exit | exit from the page | SUCCESS | REQUIREMENT BASED |

## Low-Level Test Plan

| Test ID | HL_ID | Description | Exp I/P | Exp O/P | Actual Output | Type of Test |
| ------- | ----- | ----------- | ------- | ------- | ------------- | ------------ |
| LL_01 | HL_01 | Check if the user has entered correct loginId is valid or not | loginID | success | SUCCESS  | REQUIREMENT BASED |
| LL_02 | HL_02 | Check if the user has entered correct password is valid o not | password | success | SUCCESS | REQUIREMENT BASED |
| LL_03 | HL_04, HL_05, HL_06, HL_07, HL_08, HL_09, HL_10 | Check if the user has entered correct parking information or not | enter the value | success | SUCCESS (Manual) | REQUIREMENT BASED |
| LL_04 | HL_04 | Check if the user has entered the vehicle | (1) car (2) scooter | success | SUCCESS (Manual) | REQUIREMENT BASED | 
