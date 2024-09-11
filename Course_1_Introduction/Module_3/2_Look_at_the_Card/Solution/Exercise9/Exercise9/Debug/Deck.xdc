<?xml version="1.0"?><doc>
<members>
<member name="T:exercise9.Rank" decl="false" source="D:\Notes\Allmind\Cpp_and_Unreal_Coursera\Course_1_Introduction\Module_3\2_Look_at_the_Card\Solution\Exercise9\Exercise9\Rank.h" line="13">
An enumeration for card ranks

</member>
<member name="T:exercise9.Suit" decl="false" source="D:\Notes\Allmind\Cpp_and_Unreal_Coursera\Course_1_Introduction\Module_3\2_Look_at_the_Card\Solution\Exercise9\Exercise9\Suit.h" line="13">
An enumeration for card suits

</member>
<member name="T:exercise9.Card" decl="false" source="D:\Notes\Allmind\Cpp_and_Unreal_Coursera\Course_1_Introduction\Module_3\2_Look_at_the_Card\Solution\Exercise9\Exercise9\Card.h" line="10">
A playing card

</member>
<member name="M:exercise9.Card.#ctor(exercise9.Rank,exercise9.Suit)" decl="true" source="D:\Notes\Allmind\Cpp_and_Unreal_Coursera\Course_1_Introduction\Module_3\2_Look_at_the_Card\Solution\Exercise9\Exercise9\Card.h" line="20">
Constructs a card with the given rank and suit
@param Rank rank
@param Suit suit

</member>
<member name="M:exercise9.Card.GetRank" decl="true" source="D:\Notes\Allmind\Cpp_and_Unreal_Coursera\Course_1_Introduction\Module_3\2_Look_at_the_Card\Solution\Exercise9\Exercise9\Card.h" line="27">
Gets the card rank
@return rank

</member>
<member name="M:exercise9.Card.GetSuit" decl="true" source="D:\Notes\Allmind\Cpp_and_Unreal_Coursera\Course_1_Introduction\Module_3\2_Look_at_the_Card\Solution\Exercise9\Exercise9\Card.h" line="33">
Gets the card suit
@return suit

</member>
<member name="M:exercise9.Card.IsFaceUp" decl="true" source="D:\Notes\Allmind\Cpp_and_Unreal_Coursera\Course_1_Introduction\Module_3\2_Look_at_the_Card\Solution\Exercise9\Exercise9\Card.h" line="39">
Gets whether or not the card is face up
@return true if face up, false if face down

</member>
<member name="M:exercise9.Card.FlipOver" decl="true" source="D:\Notes\Allmind\Cpp_and_Unreal_Coursera\Course_1_Introduction\Module_3\2_Look_at_the_Card\Solution\Exercise9\Exercise9\Card.h" line="45">
Flips the card over

</member>
<member name="M:exercise9.Card.Print" decl="true" source="D:\Notes\Allmind\Cpp_and_Unreal_Coursera\Course_1_Introduction\Module_3\2_Look_at_the_Card\Solution\Exercise9\Exercise9\Card.h" line="50">
Flips the card over

</member>
<member name="T:exercise9.Deck" decl="false" source="D:\Notes\Allmind\Cpp_and_Unreal_Coursera\Course_1_Introduction\Module_3\2_Look_at_the_Card\Solution\Exercise9\Exercise9\Deck.h" line="11">
A deck of cards

</member>
<member name="M:exercise9.Deck.#ctor" decl="true" source="D:\Notes\Allmind\Cpp_and_Unreal_Coursera\Course_1_Introduction\Module_3\2_Look_at_the_Card\Solution\Exercise9\Exercise9\Deck.h" line="19">
Constructor

</member>
<member name="M:exercise9.Deck.IsEmpty" decl="true" source="D:\Notes\Allmind\Cpp_and_Unreal_Coursera\Course_1_Introduction\Module_3\2_Look_at_the_Card\Solution\Exercise9\Exercise9\Deck.h" line="24">
Gets whether or not the deck is empty
@return true if the deck is empty, false otherwise

</member>
<member name="M:exercise9.Deck.Cut(System.UInt32)" decl="true" source="D:\Notes\Allmind\Cpp_and_Unreal_Coursera\Course_1_Introduction\Module_3\2_Look_at_the_Card\Solution\Exercise9\Exercise9\Deck.h" line="30">
Cuts the deck of cards at the given location
@param Location location at which to cut the deck

</member>
<member name="M:exercise9.Deck.Shuffle" decl="true" source="D:\Notes\Allmind\Cpp_and_Unreal_Coursera\Course_1_Introduction\Module_3\2_Look_at_the_Card\Solution\Exercise9\Exercise9\Deck.h" line="36">
Shuffles the deck

</member>
<member name="M:exercise9.Deck.TakeTopCard" decl="true" source="D:\Notes\Allmind\Cpp_and_Unreal_Coursera\Course_1_Introduction\Module_3\2_Look_at_the_Card\Solution\Exercise9\Exercise9\Deck.h" line="41">
 Takes the top card from the deck. If the deck is empty, throws
		an exception
 @return top card

</member>
<member name="M:exercise9.Deck.Print" decl="true" source="D:\Notes\Allmind\Cpp_and_Unreal_Coursera\Course_1_Introduction\Module_3\2_Look_at_the_Card\Solution\Exercise9\Exercise9\Deck.h" line="48">
Prints the cards in the deck, top to bottom

</member>
<member name="T:exercise9.Random" decl="false" source="D:\Notes\Allmind\Cpp_and_Unreal_Coursera\Course_1_Introduction\Module_3\2_Look_at_the_Card\Solution\Exercise9\Exercise9\Random.h" line="9">
@brief A random number generator

</member>
<member name="M:exercise9.Random.Initialize" decl="true" source="D:\Notes\Allmind\Cpp_and_Unreal_Coursera\Course_1_Introduction\Module_3\2_Look_at_the_Card\Solution\Exercise9\Exercise9\Random.h" line="20">
Initializes the random number generator

</member>
<member name="M:exercise9.Random.Next(System.Int32)" decl="true" source="D:\Notes\Allmind\Cpp_and_Unreal_Coursera\Course_1_Introduction\Module_3\2_Look_at_the_Card\Solution\Exercise9\Exercise9\Random.h" line="25">
 Returns a non-negative random integer that is less than the specified
		maximum
 @param MaxValue The exclusive upper bound of the random number
		to be generated. maxValue must be greater than or equal to 0 and
		less than or equal to
 @return A 32-bit signed integer that is greater than or equal to 0,
		and less than maxValue; that is, the range of return values
		includes 0 but not maxValue

</member>
<member name="M:exercise9.Deck.#ctor" decl="false" source="D:\Notes\Allmind\Cpp_and_Unreal_Coursera\Course_1_Introduction\Module_3\2_Look_at_the_Card\Solution\Exercise9\Exercise9\Deck.cpp" line="12">
Constructor

</member>
<member name="M:exercise9.Deck.IsEmpty" decl="false" source="D:\Notes\Allmind\Cpp_and_Unreal_Coursera\Course_1_Introduction\Module_3\2_Look_at_the_Card\Solution\Exercise9\Exercise9\Deck.cpp" line="27">
Gets whether or not the deck is empty
@return true if the deck is empty, false otherwise

</member>
<member name="M:exercise9.Deck.Cut(System.UInt32)" decl="false" source="D:\Notes\Allmind\Cpp_and_Unreal_Coursera\Course_1_Introduction\Module_3\2_Look_at_the_Card\Solution\Exercise9\Exercise9\Deck.cpp" line="36">
Cuts the deck of cards at the given location
@param Location location at which to cut the deck

</member>
<member name="M:exercise9.Deck.Shuffle" decl="false" source="D:\Notes\Allmind\Cpp_and_Unreal_Coursera\Course_1_Introduction\Module_3\2_Look_at_the_Card\Solution\Exercise9\Exercise9\Deck.cpp" line="65">
Shuffles the deck
@see http://download.oracle.com/javase/1.5.0/docs/api/java/util/Collections.html#shuffle%28java.util.List%29

</member>
<member name="M:exercise9.Deck.TakeTopCard" decl="false" source="D:\Notes\Allmind\Cpp_and_Unreal_Coursera\Course_1_Introduction\Module_3\2_Look_at_the_Card\Solution\Exercise9\Exercise9\Deck.cpp" line="80">
 Takes the top card from the deck. If the deck is empty, throws
		an exception
 @return top card

</member>
<member name="M:exercise9.Deck.Print" decl="false" source="D:\Notes\Allmind\Cpp_and_Unreal_Coursera\Course_1_Introduction\Module_3\2_Look_at_the_Card\Solution\Exercise9\Exercise9\Deck.cpp" line="99">
Prints the cards in the deck, top to bottom

</member>
</members>
</doc>