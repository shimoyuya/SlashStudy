#pragma once

#include "DrawDebugHelpers.h"

#define Draw_Sphere(Location) if(GetWorld()) DrawDebugSphere(GetWorld(), Location, 50.f, 24, FColor::Red, true);
#define Draw_Sphere_SingleFrame(Location) if(GetWorld()) DrawDebugSphere(GetWorld(), Location, 50.f, 24, FColor::Red, false, -1.f);
#define Draw_Line(StartLocation,EndLocation) if(GetWorld()) DrawDebugLine(GetWorld(), StartLocation, EndLocation, FColor::Red, true, -1.f, 0, 1.f);
#define Draw_Line_SingleFrame(StartLocation,EndLocation) if(GetWorld()) DrawDebugLine(GetWorld(), StartLocation, EndLocation, FColor::Red, false, -1.f, 0, 1.f);
#define Draw_Point(Location) if(GetWorld()) DrawDebugPoint(GetWorld(), Location, 15.f, FColor::Red, true);
#define Draw_Point_SingleFrame(Location) if(GetWorld()) DrawDebugPoint(GetWorld(), Location, 15.f, FColor::Red, false, -1.f);
#define Draw_Vector(StartLocation, EndLocation) if(GetWorld()) \
	{	\
		DrawDebugLine(GetWorld(), StartLocation, EndLocation, FColor::Red, true, -1.f, 0, 1.f);\
		DrawDebugPoint(GetWorld(), EndLocation, 15.f, FColor::Red, true);\
	}
#define Draw_Vector_SingleFrame(StartLocation, EndLocation) if(GetWorld()) \
	{	\
		DrawDebugLine(GetWorld(), StartLocation, EndLocation, FColor::Red, false, -1.f, 0, 1.f);\
		DrawDebugPoint(GetWorld(), EndLocation, 15.f, FColor::Red, false, -1.f);\
	}