// #include <iostream>
//
//
////enum Color : int; // Okay
//
//enum Color
//{
//    color_black, // assigned 0
//    color_red, // assigned 1
//    color_blue, // assigned 2
//    color_green, // assigned 3
//    color_white, // assigned 4
//    color_cyan, // assigned 5
//    color_yellow, // assigned 6
//    color_magenta // assigned 7
//};
//
//void printColor(Color color)
//{
// 
//    switch (color)
//    {
//    case color_black:
//        std::cout << "Black";
//        break;
//    case color_red:
//        std::cout << "Red";
//        break;
//    case color_blue:
//        std::cout << "Blue";
//        break;
//    case color_green:
//        std::cout << "Green";
//        break;
//    case color_white:
//        std::cout << "White";
//        break;
//    case color_cyan:
//        std::cout << "Cyan";
//        break;
//    case color_yellow:
//        std::cout << "Yellow";
//        break;
//    case color_magenta:
//        std::cout << "Magenta";
//        break;
//    default:
//        std::cout << "Who knows!";
//    }
//
//    std::cout << "Life is sweet when the sun's up";
//}
//
//int main()
//{
//    std::cout << "Hello World!\n";
//    printColor(color_magenta);
//    return 0; 
//}

//enum Color
//{
//    color_black, // assigned 0
//    color_red, // assigned 1
//    color_blue, // assigned 2
//    color_green, // assigned 3
//    color_white, // assigned 4
//    color_cyan, // assigned 5
//    color_yellow, // assigned 6
//    color_magenta // assigned 7
//};


//#include <iostream>
//#include <string>
//
//enum ItemType
//{
//    itemtype_sword,
//    itemtype_torch,
//    itemtype_potion
//};
//
//std::string getItemName(ItemType itemType)
//{
//
//	switch (itemType)
//	{
//	case itemtype_sword:
//		return "Sword";
//	case itemtype_torch:
//		return "Torch";
//	case itemtype_potion:
//		return "Potion";
//	}
//
//	// Just in case we add a new item in the future and forget to update this function
//	return "???";
//}
//
//int main()
//{
//	// ItemType is the enumerated type we've defined above.
//// itemType (lower case i) is the name of the variable we're defining (of type ItemType).
//// itemtype_torch is the enumerated value we're initializing variable itemType with.
//	ItemType itemType{ itemtype_torch };
//	std::cout << "You are carrying a " << getItemName(itemType) << '\n';
//	return 0;
//}


//#include <iostream>
//
//int main()
//{
//    enum class Color
//    {
//        color_red, // color_red is placed in the same scope as Color
//        color_blue
//    };
//
//    enum class Fruit
//    {
//        fruit_banana, // fruit_banana is placed in the same scope as Fruit
//        fruit_apple
//    };
//
//    Color color{ Color::color_red }; // Color and color_red can be accessed in the same scope (no prefix needed)
//    Fruit fruit{ Fruit::fruit_banana }; // Fruit and fruit_banana can be accessed in the same scope (no prefix needed)
//
//    if (color == fruit) // The compiler will compare a and b as integers
//        std::cout << "color and fruit are equal\n"; // and find they are equal!
//    else
//        std::cout << "color and fruit are not equal\n";
//
//    return 0;
//}


//#include <iostream>
//
//int main()
//{
//    enum class Color
//    {
//        red,
//        blue
//    };
//
//    Color color{ Color::red };
//
//    if (color == Color::red) // this is okay
//        std::cout << "The color is red!\n";
//    else if (color == Color::blue)
//        std::cout << "The color is blue!\n";
//
//    return 0;
//}

//#include <iostream>
//
//struct Rectangle
//{
//    double length{ 1.0 };
//    double width{ 1.0 };
//};
//
//int main()
//{
//    Rectangle x{ 3.9,4.5 }; // length = 1.0, width = 1.0
//
//    /*x.length = 2*/; // you can assign other values like normal
//    std::cout << x.length; 
//    return 0;
//}

//#include <iostream>
//
//struct Employee {
//	int id{};
//	int age{};
//	double wage{};
//};
//
//void printEmplData(Employee employee)
//{
//	std::cout << "ID: " << employee.id << '\n'; 
//	std::cout << "Age: " << employee.age << '\n';
//	std::cout << "Wage: " << employee.wage << '\n';
//}
//
//
//int main()
//{
//
//	Employee joe{ 234, 55, 10.5 };
//	Employee afam{ 34, 54, 11.2 };
//
//	printEmplData(joe);
//	printEmplData(afam);
//
//	return 0; 
//
//}

//#include <iostream>
//
//struct Point3d
//{
//    double x{};
//    double y{};
//    double z{};
//};
//
//Point3d getZeroPoint()
//{
//    // We can create a variable and return the variable.
//    Point3d temp{ 0.0, 0.0, 0.0 };
//    return temp;
//}
//
//Point3d getZeroPoint2()
//{
//    // We can return directly. We already specified the type
//    // at the function declaration (Point3d), so we don't need
//    // it again here.
//    return { 0.0, 0.0, 0.0 };
//}
//
//Point3d getZeroPoint3()
//{
//    // We can use empty curly braces to return a Point3d.
//    // All non-static members with initializers will use those initializer values
//    // All non-static non-initialized members will be zero-initialized
//    return {};
//}
//
//int main()
//{
//    Point3d zero{ getZeroPoint() };
//
//    if (zero.x == 0.0 && zero.y == 0.0 && zero.z == 0.0)
//        std::cout << "The point is zero\n";
//    else
//        std::cout << "The point is not zero\n";
//
//    return 0;
//}


//#include <cstdint>
//#include <iostream>
//
//struct Employee
//{
//    // We're using fixed-width integers for the sake of the example.
//    // Avoid them in real code.
//    std::int16_t id{};
//    std::int32_t age{};
//    double wage{};
//};
//
//int main()
//{
//    std::cout << "The size of a double is " << sizeof(double) << '\n';
//    std::cout << "The size of Employee is " << sizeof(Employee) << '\n';
//
//    return 0;
//}


//#include <iostream>
//
//struct Advertising
//{
//    int adsShown{};
//    double clickThroughRatePercentage{};
//    double averageEarningsPerClick{};
//};
//
//Advertising getAdvertising()
//{
//    Advertising temp;
//    std::cout << "How many ads were shown today? ";
//    std::cin >> temp.adsShown;
//    std::cout << "What percentage of ads were clicked on by users? ";
//    std::cin >> temp.clickThroughRatePercentage;
//    std::cout << "What was the average earnings per click? ";
//    std::cin >> temp.averageEarningsPerClick;
//    return temp;
//}
//
//void printAdvertising(Advertising ad)
//{
//    std::cout << "Number of ads shown: " << ad.adsShown << '\n';
//    std::cout << "Click through rate: " << ad.clickThroughRatePercentage << '\n';
//    std::cout << "Average earnings per click: $" << ad.averageEarningsPerClick << '\n';
//
//    // The following line is split up to reduce the length
//    // We need to divide ad.clickThroughRatePercentage by 100 because it's a percent of 100, not a multiplier
//    std::cout << "Total Earnings: $" <<
//        (ad.adsShown * ad.clickThroughRatePercentage / 100 * ad.averageEarningsPerClick) << '\n';
//}
//
//int main()
//{
//    // Declare an Advertising struct variable
//    Advertising ad{ getAdvertising() };
//    printAdvertising(ad);
//
//    return 0;
//}


//#include <iostream>
//#include <cstdlib>
//#include <ctime>
//
//
//int main()
//{
//
//	std::srand(static_cast<unsigned int>(std::time(nullptr)));
//
//
//	/*std::rand(); */
//	int count; 
//	for (count = 1; count <= 100; ++count)
//	{
//		std::cout << std::rand() << '\t';
//		if (count % 5 == 0)
//			std::cout << '\n';
//
//	}
//
//	return 0; 
//}


//#include <iostream>
//
//int getRandomNumber(int min, int max)
//{
//    static constexpr double fraction{ 1.0 / (RAND_MAX + 1.0) };  // static used for efficiency, so we only calculate this value once
//    // evenly distribute the random number across our range
//    return min + static_cast<int>((max - min + 1) * (std::rand() * fraction));
//}
//
//
//int main()
//{
//    std::cout << getRandomNumber(0, 9); 
//    std::cout << getRandomNumber(0, 9);
//    std::cout << getRandomNumber(0, 9);
//    std::cout << getRandomNumber(0, 9);
//    return 0; 
//}

//#include <iostream>
//#include <string>
//
//// Define our different monster types as an enum
//enum class MonsterType
//{
//	ogre,
//	dragon,
//	orc,
//	giant_spider,
//	slime
//};
//
//// Our monster struct represents a single monster
//struct Monster
//{
//	MonsterType type{};
//	std::string name{};
//	int health{};
//};
//
//// Return the name of the monster's type as a string
//// Since this could be used elsewhere, it's better to make this its own function
//std::string getMonsterTypeString(MonsterType type)
//{
//	switch (type)
//	{
//	case MonsterType::ogre:
//		return "Ogre";
//	case MonsterType::dragon:
//		return "Dragon";
//	case MonsterType::orc:
//		return "Orc";
//	case MonsterType::giant_spider:
//		return "Giant Spider";
//	case MonsterType::slime:
//		return "Slime";
//	}
//
//	return "Unknown";
//}
//
//// Print our monster's stats
//void printMonster(Monster monster)
//{
//	std::cout << "This " << getMonsterTypeString(monster.type) <<
//		" is named " << monster.name <<
//		" and has " << monster.health << " health.\n";
//}
//
//int main()
//{
//	Monster ogre{ MonsterType::ogre, "Torg", 145 };
//	Monster slime{ MonsterType::slime, "Blurp", 23 };
//
//	printMonster(ogre);
//	printMonster(slime);
//
//	return 0;
//}

//#include <iostream>
//
//int main()
//{
//	int prime[5]{};
//	prime[0] = 4; 
//
//	std::cout << "The lowest prime number is: " << prime[0] << '\n';
//	return 0; 
//}

//#include <iostream>
//
//int main()
//{
//    int array[5]{ 7, 4, 5 }; // only initialize first 3 elements
//
//    std::cout << array[0] << '\n';
//    std::cout << array[1] << '\n';
//    std::cout << array[2] << '\n';
//    std::cout << array[3] << '\n';
//    std::cout << array[4] << '\n';
//
//    return 0;
//}


//#include <iostream>
//#include <iterator> // for std::size
//
//int main()
//{
//    int array[]{ 1, 1, 2, 3, 5, 8, 13, 21 };
//    std::cout << "The array has: " << std::size(array) << " elements\n";
//
//    return 0;
//}

//#include <iostream>
//
//void printSize(int array[])
//{
//    std::cout << sizeof(array) / sizeof(array[0]) << '\n';
//}
//
//int main()
//{
//    int array[]{ 1, 1, 2, 3, 5, 8, 13, 21 };
//    std::cout << sizeof(array) / sizeof(array[0]) << '\n';
//    printSize(array);
//
//    return 0;
//}

//#include <iostream>
//
//namespace Animals {
//
//	enum Animals {
//		chicken, 
//		dog, 
//		lamb, 
//		sheep, 
//		elephant,
//		lion, 
//		max_amount
//	};
//}
//
//int main()
//{
//	int legs[Animals::max_amount]{2,3,1,4,1,4};
//	std::cout << "Number of legs an elephant got is " << legs[Animals::lion]; 
//	return 0; 
//}


//#include <iostream>
//#include <iterator>

//int main()
//{
//	int scores[]{ 84, 92, 76, 81, 56 };
//	int numStudents{ static_cast<int>(std::size(scores)) };
//	// const int numStudents{ sizeof(scores) / sizeof(scores[0]) }; // use this instead if not C++17 capable
//	int totalScore{ 0 };
//
//	// use a loop to calculate totalScore
//	for (int student{ 0 }; student < numStudents; ++student)
//		totalScore += scores[student];
//
//	auto averageScore{ static_cast<double>(totalScore) / numStudents };
//	std::cout << averageScore; 
//	return 0; 
//}


//int main()
//{
//	constexpr int arrays[]{ 4, 6, 7, 3, 8, 2, 1, 9, 5 };
//	int numofarray{ static_cast<int>(std::size(arrays)) }; 
//
//	for (int counit{ 0 }; counit < numofarray; ++counit)
//		std::cout << arrays[counit] << '\n';
//	return 0; 
//}


//#include <iostream>
//#include <iterator> // for std::size
//#include <limits>
//
//int main()
//{
//	int scores[]{ 84, 92, 76, 81, 56 };
//	int numStudents{ static_cast<int>(std::size(scores)) };
//
//	int maxIndex{ 0 }; 
//
//	for (int student{ 0 }; student < numStudents; ++student) 
//	{
//		if (scores[student] > scores[maxIndex]) {
//			maxIndex = student; 
//		}
//
//	}
//	std::cout << "The best score was " << scores[maxIndex] << '\n';
//
//	return 0; 
//}

//#include <iostream>
//#include <utility>
//
//int main()
//{
//	int x{ 4 };
//	int y{ 5 };
//
//	std::cout << "Before swap: x = " << x << ", y = " << y << '\n';
//	std::swap(x, y); // swap the values of x and y
//	std::cout << "After swap:  x = " << x << ", y = " << y << '\n';
//	return 0; 
//
//}


#include <iostream>
#include <iterator>
#include <utility>

int main()
{
	int array[]{ 30, 50, 20, 10, 40 };
	constexpr int length{ static_cast<int>(std::size(array)) };

	for (int startIndex{ 0 }; startIndex < length - 1; ++startIndex)
	{
		int smallestIndex{ startIndex };

		for (int currentIndex{ startIndex + 1 }; currentIndex < length; ++currentIndex)
		{
			if (array[currentIndex] < array[smallestIndex])
				smallestIndex = currentIndex;

		}

		std::swap(array[startIndex], array[smallestIndex]);
	}

	for (int index{ 0 }; index < length; ++index)
	{
		std::cout << array[index] << ' ';
	}
	std::cout << '\n';
	return 0;
}