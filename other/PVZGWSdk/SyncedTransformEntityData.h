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
	class SyncedTransformEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SyncedTransformEntityData"); }
		virtual ~SyncedTransformEntityData() override {}
		SyncedTransformEntityData() {
			m_interpolate = false;
		};

		bool m_interpolate; // 0x18 (24)
		LinearTransform m_in; // 0x20 (32)
	}; // 0x60 (96)
}

