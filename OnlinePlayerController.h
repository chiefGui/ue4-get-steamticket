#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "OnlineSubsystem.h"
#include "Online.h"
#include "OnlinePlayerController.generated.h"

class IOnlineSubsystem;

/**
 * 
 */
UCLASS()
class STRIVE_API AOnlinePlayerController : public APlayerController
{
	GENERATED_BODY()
		IOnlineSubsystem* OnlineInterface = IOnlineSubsystem::Get();

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Online Features", meta=(Tooltip = "Gets the Steam's Session Ticket to use with GameSparks and other BaaSs."))
		FString GetSessionTicket();
};