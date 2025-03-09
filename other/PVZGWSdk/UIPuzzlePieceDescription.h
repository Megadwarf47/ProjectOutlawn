///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/RarenessLevel.h>
#include <fb/String.h>
#include <fb/UIItemDescription.h>

namespace fb {
	class UIPuzzlePieceDescription : public UIItemDescription {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIPuzzlePieceDescription"); }
		virtual ~UIPuzzlePieceDescription() override {}
		UIPuzzlePieceDescription() {
			m_pieceIndex = 0;
			m_rarenessLevel = RarenessLevel::RarenessLevel_Common;
		};

		String m_className; // 0x28 (40)
		String m_costumeName; // 0x30 (48)
		s32 m_pieceIndex; // 0x38 (56)
		String m_name; // 0x40 (64)
		String m_description; // 0x48 (72)
		String m_category; // 0x50 (80)
		String m_cardTexturePath; // 0x58 (88)
		String m_pieceTexturePath; // 0x60 (96)
		RarenessLevel m_rarenessLevel; // 0x68 (104)
	}; // 0x70 (112)
}

