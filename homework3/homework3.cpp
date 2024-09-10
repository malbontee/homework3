

//#include <iostream>
//#include <cmath>
//using namespace std;
//
//int main()
//    {
//    
//    /*Ввести три числа и найти наименьшее среди них.*/
//    int num1, num2, num3;
//    int min_num;
//    cout << "Please enter your number:\n";
//    cin >> num1;
//    cout << "Please enter your number:\n";
//    cin >> num2;
//    cout << "Please enter your number:\n";
//    cin >> num3;
//
//    min_num = num1;
//
//    if (num2 < min_num) {
//        min_num = num2;
//    }
//    if (num3 < min_num) {
//        min_num = num3;
//    }
//    cout << "The smallest number is: " << min_num << "\n";
//
//    /*Ввести число, и выяснить - положительное оно, отрицательное, или равно нулю?*/
//    int number;
//    cout << "Please enter your number:\n";
//    cin >> number;
//    if (number > 0) {
//        cout << "You entered a positive number!\n";
//    }
//    if (number == 0) {
//        cout << "You entered 0!\n";
//    }
//    if (number < 0) {
//        cout << "You entered a negative number!\n";
//
//    }
//
//    /*Реализовать калькулятор. Вводятся 2 любых вещественных числа в переменные a и b. При выборе соответствующего пункта меню происходит вывод результата вычисления (должна быть проверка деления на 0!) */
//
//    double num1, num2, result;
//    int choice;
//    cout << "Please enter your number:\n";
//    cin >> num1;
//    cout << "Please enter your number:\n";
//    cin >> num2;
//    cout << "Menu:\n1) a + b\n2) a - b\n3) a * b\n4) a / b\n5) a % b\nPlease choose one option: ";
//    cin >> choice;
//    if (choice == 1) {
//        result = num1 + num2;
//    }
//    else if (choice == 2) {
//        result = num1 - num2;
//    }
//    else if (choice == 3) {
//        result = num1 * num2;
//    }
//    else if (choice == 4) {
//        if (num2 != 0) {
//            result = num1 / num2;
//        }
//        else {
//            cout << "Division by zero is not allowed!\n";
//            return 1;
//        }
//    }
//    else if (choice == 5) {
//        if (num2 != 0) {
//            result = fmod(num1, num2);
//        }
//        else {
//            cout << "Division by zero is not allowed!\n";
//            return 1;
//        }
//    }
//    else {
//        cout << "You entered invalid number. Try again.\n";
//        return 1;
//    }
//    cout << "The result is " << result << "\n";
//
//    /*Написать программу для проверки кратности числа X числу Y (оба числа вводятся с клавиатуры).*/
//    int number1, number2;
//    cout << "Please enter the first number:\n";
//    cin >> number1;
//    cout << "Please enter the second number:\n";
//    cin >> number2;
//    if (number2 == 0) {
//        cout << "Division by zero is not allowed!\n";
//    }
//    else if (number1 % number2 == 0) {
//        cout << "Number " << number1 << "is a multiple of " << number2 << "\n";
//    }
//    else {
//        cout << "Number " << number1 << "isn't a multiple of " << number2 << "\n";
//    }
//    /*Ввести число и определить кратно ли оно 3, 5, и 7 одновременно.*/
//    int number;
//    cout << "Please enter a number:\n";
//    cin >> number;
//    if (number % 3 == 0 && number % 5 == 0 && number % 7 == 0) {
//        cout << "Your number is a multiple of 3, 5, 7!\n";
//    }
//    else {
//        cout << "Your number isn't a multiple of 3, 5, 7!\n";
//    }
//    /*Проверить, имеет ли введённое число вещественную часть. Например, числа 3.14 и 2.5 – имеют вещественную часть, а числа 5 и 10.0 – нет.*/
//    double number;
//    cout << "Please enter the number:\n";
//    cin >> number;
//    int int_part = static_cast<int>(number);
//    if (number != int_part) {
//        cout << "The number has a fractional part.\n";
//    }
//    else {
//        cout << "The number hasn't a fractional part.\n";
//    }
//    /*Написать программу, которая предлагает пользователю ввести номер дня недели, и в ответ показывает название этого дня (например, 6 – это суббота). Решить с использованием if и switch.*/
//    int day;
//    cout << "Please enter the number of a day you want to see: ";
//    cin >> day;
//    if (day < 1 || day > 7) {
//        cout << "Please enter a correct number in range 1-7\n";
//    }
//    else {
//
//        switch (day) {
//        case 1:
//            cout << "Monday\n";
//            break;
//        case 2:
//            cout << "Tuesday\n";
//            break;
//        case 3:
//            cout << "Wednesday\n";
//            break;
//        case 4:
//            cout << "Thursday\n";
//            break;
//        case 5:
//            cout << "Friday\n";
//            break;
//        case 6:
//            cout << "Saturday\n";
//            break;
//        case 7:
//            cout << "Sunday\n";
//            break;
//        }
//    }
//
//
//    /*Вводится время (только часы) – программа выводит приветствие, соответствующее введённому времени (например, ввели 15 часов – выводится приветствие «добрый день»).*/
//    int time;
//    cout << "Please enter time:\n";
//    cin >> time;
//    if (time >= 0 && time < 6) {
//        cout << "Good night!\n";
//    }
//    else if (time >= 6 && time < 12) {
//        cout << "Good morning!\n";
//    }
//    else if (time >= 12 && time < 18) {
//        cout << "Good afternoon!\n";
//    }
//    else if (time >= 18 && time < 24) {
//        cout << "Good evening!\n";
//    }
//    else {
//        cout << "Invalid time. Try again!\n";
//    }
//
//
//
//
//
//    /*Пользователь указывает дату своего рождения (число и месяц). Программа определяет знак зодиака пользователя и составляет для него гороскоп на ближайшую неделю.*/
//
//
//    int day, month;
//    cout << "Enter the day:\n";
//    cin >> day;
//    cout << "Enter the month:\n";
//    cin >> month;
//
//    bool valid_date = true;
//
//    if (month < 1 || month > 12 || day < 1) {
//        valid_date = false;
//    }
//    else if (month == 2) {
//        // для февраля
//        if (day > 28) valid_date = false;
//
//    }
//    else if (month == 4 || month == 6 || month == 9 || month == 11) {
//        // для апреля, июня, сентября, ноября - у них 30дней
//        if (day > 30) valid_date = false;
//    }
//    else {
//        if (day > 31) valid_date = false;
//    }
//
//    if (valid_date == false) {
//        cout << "Invalid date. Please try again";
//    }
//    else {
//        string zodiac_sign;
//        string horoscope;
//
//        if ((day > 22 && month == 12) || (day <= 20 && month == 1)) {
//            zodiac_sign = "Capricorn";
//            horoscope = "This week, focus on setting long-term goals and making practical decisions. Financial planning and personal growth will be highlighted. Be cautious about sudden changes in your routine.\n";
//        }
//        else if ((day > 20 && month == 1) || (day <= 18 && month == 2)) {
//            zodiac_sign = "Aquarius";
//            horoscope = "Expect a week full of new ideas and creative solutions. Embrace your innovative side and take risks in areas that inspire you. Social connections and collaborations will be beneficial.\n";
//        }
//        else if ((day > 18 && month == 2) || (day <= 20 && month == 3)) {
//            zodiac_sign = "Pisces";
//            horoscope = "This week, pay attention to your intuition and emotional well-being. It’s a good time for reflection and spiritual activities. Relationships may require extra empathy and understanding.\n";
//        }
//        else if ((day > 20 && month == 3) || (day <= 19 && month == 4)) {
//            zodiac_sign = "Aries";
//            horoscope = "Prepare for an energetic week filled with new challenges and opportunities. Take initiative and lead projects, but remember to balance your enthusiasm with patience.\n";
//        }
//        else if ((day > 19 && month == 4) || (day <= 20 && month == 5)) {
//            zodiac_sign = "Taurus";
//            horoscope = "This week, focus on your personal stability and comfort. Financial decisions and home improvements will be highlighted. Seek balance between work and relaxation.\n";
//        }
//        else if ((day > 20 && month == 5) || (day <= 21 && month == 6)) {
//            zodiac_sign = "Gemini";
//            horoscope = "Expect a dynamic week with plenty of communication and social interactions. Embrace change and flexibility in your plans. It’s a good time to learn new skills or take on new projects.\n";
//        }
//        else if ((day > 21 && month == 6) || (day <= 22 && month == 7)) {
//            zodiac_sign = "Cancer";
//            horoscope = "This week, focus on nurturing your relationships and home life. Emotional connections will be strong, and it’s a good time to address any family matters. Self-care is essential.\n";
//        }
//        else if ((day > 22 && month == 7) || (day <= 22 && month == 8)) {
//            zodiac_sign = "Leo";
//            horoscope = "Prepare for a week of creativity and self-expression. Your confidence and charisma will shine, making it a great time to pursue personal projects and social activities.\n";
//        }
//        else if ((day > 22 && month == 8) || (day <= 22 && month == 9)) {
//            zodiac_sign = "Virgo";
//            horoscope = "This week, focus on organization and efficiency. Pay attention to details in your work and daily routines. It’s a good time to address any health or wellness concerns.\n";
//        }
//        else if ((day > 22 && month == 9) || (day <= 23 && month == 10)) {
//            zodiac_sign = "Libra";
//            horoscope = "Expect a week of balance and harmony in your relationships. It’s a good time to seek fairness and resolve conflicts. Your diplomatic skills will be especially strong.\n";
//        }
//        else if ((day > 23 && month == 10) || (day <= 21 && month == 11)) {
//            zodiac_sign = "Scorpio";
//            horoscope = "This week, focus on deepening your personal connections and understanding your inner self. It’s a good time for transformation and letting go of old habits.\n";
//        }
//        else if ((day > 21 && month == 11) || (day <= 21 && month == 12)) {
//            zodiac_sign = "Sagittarius";
//            horoscope = "Prepare for a week of adventure and exploration. Embrace new experiences and expand your horizons. Travel and learning opportunities will be especially rewarding.\n";
//        }
//        cout << "Zodiac sign: " << zodiac_sign << "\n";
//        cout << "Weekly horoscope: " << horoscope;
//    }
//
//    /*Ввести любую дату (день, месяц и год вводятся по отдельности). Проверить корректность введённых значений. Вывести дату следующего дня.*/
//    int day, month, year;
//
//    cout << "Enter day: ";
//    cin >> day;
//    cout << "Enter month: ";
//    cin >> month;
//    cout << "Enter year: ";
//    cin >> year;
//
//    if (day < 1 || day > 31 || month < 1 || month > 12 || year < 1900 || year > 2030) {
//        cout << "Invalid date entered.\n";
//        return 1;
//    }
//
//    if (month == 2 && day == 28) {  //для февраля 
//        day = 1;
//        month += 1;
//    }
//    else if ((month == 4 || month == 6 || month == 9 || month == 11) && day == 30) {
//        day = 1;
//        month += 1;
//    }
//    else if (day == 31) {
//        day = 1;
//        month += 1;
//    }
//    else {
//        day += 1;
//    }
//
//    if (month > 12) {
//        month = 1;
//        year += 1;
//    }
//    cout << "Next day: " << day << "/" << month << "/" << year << "\n"; 
//
//
//
//
//
//    }
//
//
