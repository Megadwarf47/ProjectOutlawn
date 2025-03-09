///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/InteractionData.h>

namespace fb {
	class SoldierInteractionData : public InteractionData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SoldierInteractionData"); }
		virtual ~SoldierInteractionData() override {}
		SoldierInteractionData() {
			m_interactInputAction = 1573615674;
		};

	}; // 0x20 (32)
}

