///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/PVZMessageInfo.h>
#include <fb/UIComponentData.h>

namespace fb {
	class PVZUIMessageCompData : public UIComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PVZUIMessageCompData"); }
		virtual ~PVZUIMessageCompData() override {}
		PVZUIMessageCompData() {
			m_scoreAggregateTime = 5.f;
			m_challengeCompleteDisplayTime = 4.5f;
			m_levelUpDisplayTime = 8.f;
			m_newChallengeDisplayTime = 3.1f;
		};

		float m_scoreAggregateTime; // 0x30 (48)
		PVZMessageInfo m_chatMessageInfo; // 0x38 (56)
		PVZMessageInfo m_killMessageInfo; // 0x50 (80)
		PVZMessageInfo m_scoreMessageInfo; // 0x68 (104)
		PVZMessageInfo m_scoreMinorMessageInfo; // 0x80 (128)
		PVZMessageInfo m_scoreMajorMessageInfo; // 0x98 (152)
		PVZMessageInfo m_gameMessageInfo; // 0xB0 (176)
		PVZMessageInfo m_staticMessageInfo; // 0xC8 (200)
		PVZMessageInfo m_outOfBoundsMessageInfo; // 0xE0 (224)
		PVZMessageInfo m_killScoreMessageInfo; // 0xF8 (248)
		PVZMessageInfo m_logLinesMessageInfo; // 0x110 (272)
		PVZMessageInfo m_tooltipMessageInfo; // 0x128 (296)
		PVZMessageInfo m_subtitleMessageInfo; // 0x140 (320)
		PVZMessageInfo m_rewardMessageInfo; // 0x158 (344)
		PVZMessageInfo m_localKillMessageInfo; // 0x170 (368)
		PVZMessageInfo m_scoreMessageInfo5; // 0x188 (392)
		PVZMessageInfo m_scoreMessageInfo10; // 0x1A0 (416)
		PVZMessageInfo m_scoreMessageInfo25; // 0x1B8 (440)
		PVZMessageInfo m_scoreMessageInfo50; // 0x1D0 (464)
		PVZMessageInfo m_scoreMessageInfo100; // 0x1E8 (488)
		PVZMessageInfo m_scoreMessageInfo250; // 0x200 (512)
		Array<String> m_forceSubtitlesForTheseLevels; // 0x218 (536)
		Array<String> m_forceSubtitlesOffForTheseLevels; // 0x220 (544)
		float m_challengeCompleteDisplayTime; // 0x228 (552)
		float m_levelUpDisplayTime; // 0x22C (556)
		float m_newChallengeDisplayTime; // 0x230 (560)
	}; // 0x238 (568)
}

