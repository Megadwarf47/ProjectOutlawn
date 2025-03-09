///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/GameComponentData.h>

namespace fb {
	class TargetCameraEntityData;
}

namespace fb {
	class TargetCameraComponentData : public GameComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("TargetCameraComponentData"); }
		virtual ~TargetCameraComponentData() override {}
		virtual Realm getRealm() const override { return Realm_Client; }
		TargetCameraComponentData() {
		};

		CtrRef<TargetCameraEntityData> m_camera; // 0x70 (112)
	}; // 0x80 (128)
}

