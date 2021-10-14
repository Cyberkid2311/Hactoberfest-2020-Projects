<script>
 
// Javascript program for age calculator
 
// function to calculate current age
function findAge(current_date, current_month, current_year, birth_date,
             birth_month, birth_year)
{
    // days of every month
    month = [31, 28, 31, 30, 31, 30, 31,
                        31, 30, 31, 30, 31 ]
 
    // if birth date is greater then current birth
    // month then do not count this month and add 30
    // to the date so as to subtract the date and
    // get the remaining days
    if (birth_date > current_date) {
        current_date = current_date + month[birth_month - 1];
        current_month = current_month - 1;
    }
 
    // if birth month exceeds current month, then do
    // not count this year and add 12 to the month so
    // that we can subtract and find out the difference
    if (birth_month > current_month) {
        current_year = current_year - 1;
        current_month = current_month + 12;
    }
 
    // calculate date, month, year
    var calculated_date = current_date - birth_date;
    var calculated_month = current_month - birth_month;
    var calculated_year = current_year - birth_year;
 
    // prvar the present age
    document.write("Present Age<br>Years: "+(calculated_year)+" ");
    document.write("Months: "+calculated_month+" ");
    document.write("Days: "+calculated_date+" ");
}
 
// driver code to check the above function
// current dd// mm/yyyy
var current_date = 7;
var current_month = 12;
var current_year = 2017;
// birth dd// mm// yyyy
var birth_date = 16;
var birth_month = 12;
var birth_year = 2009;
// function call to prvar age
findAge(current_date, current_month, current_year,
            birth_date, birth_month, birth_year);
 
</script>
