#include "OnlinePlayerController.h"

FString AOnlinePlayerController::GetSessionTicket()
{
	FString SessionTicket = OnlineInterface->GetIdentityInterface()->GetAuthToken(0);

	return SessionTicket;
}