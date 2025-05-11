///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AimingConstraintsData.h>
#include <fb/CharacterCameraComponentData.h>

namespace fb {
	class CharacterInputDrivenCameraComponentData : public CharacterCameraComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("CharacterInputDrivenCameraComponentData"); }
		virtual ~CharacterInputDrivenCameraComponentData() override {}
		CharacterInputDrivenCameraComponentData() {
		};

		AimingConstraintsData m_aimingConstraints; // 0x80 (128)
	}; // 0x90 (144)
}

