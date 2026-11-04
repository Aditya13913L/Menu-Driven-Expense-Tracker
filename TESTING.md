# Testing Checklist

Use these cases to verify the program before submission. Record the actual result after running `main.cpp` on your computer.

| Test | Input / action | Expected result |
|---|---|---|
| Add valid expense | Food, Lunch, 150 | Expense is added |
| Add decimal amount | Travel, Bus, 45.50 | Expense is added |
| Negative amount | -100 | Rejected; asks again |
| Zero amount | 0 | Rejected; asks again |
| Text as amount | abc | Rejected; asks again |
| Empty category | Press Enter at category | Rejected |
| Empty description | Press Enter at description | Rejected |
| Invalid menu text | abc | Rejected; asks again |
| Invalid menu number | 9 | Invalid-choice message |
| View empty list | Choose option 2 before adding entries | No-expenses message |
| Category total | Search `food` when Food entries exist | Matching total is displayed |
| Overall total | Choose option 4 | Sum of all recorded amounts is displayed |
| Exit | Choose option 5 | Program exits |

## Notes

- The application stores entries in memory only; restarting the program clears the list.
- The screenshots supplied with this project are illustrative previews. 
