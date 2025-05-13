///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/GameComponentData.h>
#include <fb/HIKData.h>
#include <fb/IKEffectorEnum.h>

namespace fb {
	class IKComponentData : public GameComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("IKComponentData"); }
		virtual ~IKComponentData() override {}
		IKComponentData() {
			m_ikEffector = IKEffectorEnum::IKLeftHand;
		};

		IKEffectorEnum m_ikEffector; // 0x70 (112)
		HIKData m_ikData; // 0x74 (116)
	}; // 0x90 (144)
}

