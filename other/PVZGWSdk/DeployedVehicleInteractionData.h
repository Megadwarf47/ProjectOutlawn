///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/InteractionData.h>

namespace fb {
	class DeployedVehicleInteractionData : public InteractionData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("DeployedVehicleInteractionData"); }
		virtual ~DeployedVehicleInteractionData() override {}
		DeployedVehicleInteractionData() {
		};

	}; // 0x20 (32)
}

