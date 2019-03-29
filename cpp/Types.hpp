#ifndef _ABF_Types_hpp_ //
#define _ABF_Types_hpp_

#define assert_M BOOST_ASSERT

typedef std::string string;

template< typename... Types_A >
using SharedPtr = std::shared_ptr< Types_A... >;

template< typename... Types_A >
using Tuple = boost::fusion::tuple< Types_A... >;

#define tupleElementGet_M( tuple_A, Index_A ) ( boost::fusion::get< Index_A >( tuple_A ) )

template< typename Element_A >
using Range2d = Tuple< Element_A,Element_A >;

#endif // _ABF_Types_hpp_
