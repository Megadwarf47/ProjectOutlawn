///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CharacterCameraForwardAxis.h>
#include <fb/GameComponentData.h>
#include <fb/RefArray.h>

namespace fb {
	class TargetCameraData;
}

namespace fb {
	class CharacterCameraComponentData : public GameComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("CharacterCameraComponentData"); }
		virtual ~CharacterCameraComponentData() override {}
		CharacterCameraComponentData() {
			m_cameraForwardAxis = CharacterCameraForwardAxis::CharacterCameraForwardAxis_ZAxis;
		};

		RefArray<TargetCameraData> m_cameras; // 0x70 (112)
		CharacterCameraForwardAxis m_cameraForwardAxis; // 0x78 (120)
	}; // 0x80 (128)
}

