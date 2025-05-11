///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/LocalPlayerIndex.h>
#include <fb/ReferenceObjectData.h>

namespace fb {
	class SpatialReferenceObjectData : public ReferenceObjectData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SpatialReferenceObjectData"); }
		virtual ~SpatialReferenceObjectData() override {}
		SpatialReferenceObjectData() {
			m_localPlayerIndex = LocalPlayerIndex::LocalPlayerIndex_Invalid;
		};

		LocalPlayerIndex m_localPlayerIndex; // 0x80 (128)
	}; // 0x90 (144)
}

