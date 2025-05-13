///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/DataContainer.h>

namespace fb {
	class CustomSequenceTrackLinkMapping : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("CustomSequenceTrackLinkMapping"); }
		virtual ~CustomSequenceTrackLinkMapping() override {}
		CustomSequenceTrackLinkMapping() {
			m_trackLinkID = 0;
			m_sequenceLinkID = 0;
		};

		s32 m_trackLinkID; // 0x10 (16)
		s32 m_sequenceLinkID; // 0x14 (20)
	}; // 0x18 (24)
}

