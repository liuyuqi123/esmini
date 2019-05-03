#pragma once
#include <OSCFile.hpp>
#include <iostream>
#include <string>
#include <vector>

namespace scenarioengine
{

	class RoadNetwork
	{
	public:
		RoadNetwork();

		OSCFile Logics;
		OSCFile SceneGraph;

		void Print();
	};

}