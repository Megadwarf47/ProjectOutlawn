///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/LocalPlayerViewId.h>
#include <fb/SpatialEntityData.h>
#include <fb/String.h>

namespace fb {
	class CameraEntityBaseData : public SpatialEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("CameraEntityBaseData"); }
		virtual ~CameraEntityBaseData() override {}
		virtual Realm getRealm() const override { return Realm_Client; }
		CameraEntityBaseData() {
			m_priority = 1;
			m_viewId = LocalPlayerViewId::LocalPlayerViewId_RootView;
			m_enabled = true;
		};

		String m_nameId; // 0x60 (96)
		s32 m_priority; // 0x68 (104)
		LocalPlayerViewId m_viewId; // 0x6C (108)
		bool m_enabled; // 0x70 (112)
	}; // 0x80 (128)
}

