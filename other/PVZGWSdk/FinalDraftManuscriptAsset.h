///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/String.h>
#include <fb/VoiceOverManuscriptAsset.h>

namespace fb {
	class FinalDraftManuscriptAsset : public VoiceOverManuscriptAsset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("FinalDraftManuscriptAsset"); }
		virtual ~FinalDraftManuscriptAsset() override {}
		FinalDraftManuscriptAsset() {
		};

		String m_spreadsheetFileName; // 0x90 (144)
	}; // 0x98 (152)
}

