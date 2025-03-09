///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/InteractionData.h>

namespace fb {
	class EnterVehicleInteractionData : public InteractionData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("EnterVehicleInteractionData"); }
		virtual ~EnterVehicleInteractionData() override {}
		EnterVehicleInteractionData() {
			m_interactInputAction = 1541187862;
		};

	}; // 0x20 (32)
}

