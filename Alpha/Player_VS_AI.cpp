// Fill out your copyright notice in the Description page of Project Settings.

#include "Alpha.h"
#include "Player_VS_AI.h"

//////////////////////////////////////////////////////////Creation and Destruction
APlayer_VS_AI::APlayer_VS_AI()
{
	int_Score = 0;
	int_CreepsLeft = 0;
	int_TowsLeft = 0;
	int_RoundsTot = 0;
	int_CurrRound = 1;
	int_Materials = 1000;
	int_Prog = 0;
}
APlayer_VS_AI::~APlayer_VS_AI()
{

}

///////////////////////////////////////////////////////fetch functions
int APlayer_VS_AI::get_Score()
{
	return int_Score;
}
int APlayer_VS_AI::get_CreepsLeft()
{
	return int_CreepsLeft;
}
int APlayer_VS_AI::get_TowsLeft()
{
	return int_TowsLeft;
}
int APlayer_VS_AI::get_RoundsTot()
{
	return int_RoundsTot;
}
int APlayer_VS_AI::get_CurrRound()
{
	return int_CurrRound;
}
int APlayer_VS_AI::get_Materials()
{
	return int_Materials;
}

int APlayer_VS_AI::get_Prog()
{
	return int_Prog;
}

//////////////////////////////////////////////////Set value functions
void APlayer_VS_AI::set_Score(int value)
{
	int_Score = value;
}
void APlayer_VS_AI::set_CreepsLeft(int value)
{
	int_CreepsLeft = value;
}
void APlayer_VS_AI::set_TowsLeft(int value)
{
	int_TowsLeft = value;
}
void APlayer_VS_AI::set_RoundsTot(int value)
{
	int_RoundsTot = value;
}
void APlayer_VS_AI::set_CurrRound(int value)
{
	int_CurrRound = value;
}
void APlayer_VS_AI::set_Materials(int value)
{
	int_Materials = value;
}

void APlayer_VS_AI::set_Prog(int value)
{
	int_Prog = value;
}


