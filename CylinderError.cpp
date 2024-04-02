#include "CylinderError.h"
//TODO: Write CylinderError constructor

CylinderError::CylinderError(string errorMessage) {
	message = errorMessage; 

}

//TODO: Write CylinderError what() function (essentially getMessage())
string CylinderError::what(){
	return message;
}