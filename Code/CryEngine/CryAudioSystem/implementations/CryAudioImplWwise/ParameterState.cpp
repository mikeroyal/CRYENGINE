// Copyright 2001-2018 Crytek GmbH / Crytek Group. All rights reserved.

#include "stdafx.h"
#include "ParameterState.h"
#include "BaseObject.h"

#if defined(CRY_AUDIO_IMPL_WWISE_USE_PRODUCTION_CODE)
	#include <Logger.h>
#endif  // CRY_AUDIO_IMPL_WWISE_USE_PRODUCTION_CODE

#include <AK/SoundEngine/Common/AkSoundEngine.h>

namespace CryAudio
{
namespace Impl
{
namespace Wwise
{
//////////////////////////////////////////////////////////////////////////
void CParameterState::Set(IObject* const pIObject)
{
	auto const pBaseObject = static_cast<CBaseObject const*>(pIObject);

	AK::SoundEngine::SetRTPCValue(m_id, m_rtpcValue, pBaseObject->GetId());
}

//////////////////////////////////////////////////////////////////////////
void CParameterState::SetGlobally()
{
	AK::SoundEngine::SetRTPCValue(m_id, m_rtpcValue, AK_INVALID_GAME_OBJECT);
}
} // namespace Wwise
} // namespace Impl
} // namespace CryAudio
