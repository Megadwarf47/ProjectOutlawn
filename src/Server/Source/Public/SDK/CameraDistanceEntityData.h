///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/EntityData.h>
#include <fb/LinearTransform.h>

namespace fb {
	class CameraDistanceEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("CameraDistanceEntityData"); }
		virtual ~CameraDistanceEntityData() override {}
		virtual Realm getRealm() const override { return Realm_Client; }
		CameraDistanceEntityData() {
			m_maxTestDistance = 0.f;
			m_queryContinously = false;
		};

		float m_maxTestDistance; // 0x18 (24)
		LinearTransform m_transformIn; // 0x20 (32)
		bool m_queryContinously; // 0x60 (96)
	}; // 0x70 (112)
}

