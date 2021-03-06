#include "Catch/catch.hpp"
#include "car.hpp"

/*-----------------------------------------------------------*/

TEST_CASE( "Car's position is correctly set", "[Car::getPosition]" ) {
    Car car{30};

    REQUIRE( car.getPosition() == 0 );
    REQUIRE( car.getPosition() == 2 ); // This one will fail on purpose!
}
