///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/ReferenceObjectData.h>

namespace fb {
	class LogicVisualEnvironmentReferenceObjectData : public ReferenceObjectData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("LogicVisualEnvironmentReferenceObjectData"); }
		virtual ~LogicVisualEnvironmentReferenceObjectData() override {}
		virtual Realm getRealm() const override { return Realm_Client; }
		LogicVisualEnvironmentReferenceObjectData() {
			m_castSunShadowEnable = false;
		};

	}; // 0x80 (128)
}

