// Fill out your copyright notice in the Description page of Project Settings.


#include "CookiePlayer.h"

// Sets default values
ACookiePlayer::ACookiePlayer()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
}

// Called when the game starts or when spawned
void ACookiePlayer::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACookiePlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

int ACookiePlayer::AddCookie(int CookiesToAdd)
{
	NumOfCookies += CookiesToAdd;
	return NumOfCookies;
}