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
	class PartBoneData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PartBoneData"); }
		virtual ~PartBoneData() override {}
		PartBoneData() {
			m_isTransformInputLocal = true;
		};

		bool m_isTransformInputLocal; // 0x18 (24)
		LinearTransform m_transform; // 0x20 (32)
	}; // 0x60 (96)
}

