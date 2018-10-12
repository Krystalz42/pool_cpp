//
// Created by Alexandre ROULIN on 11/10/2018.
//

#ifndef EX03_BRAINFUCK_H
#define EX03_BRAINFUCK_H

enum Instruction {
	ICR_BYTE,
	DCR_BYTE,
	ICR_PTR,
	DCR_PTR,
	INP_BYTE,
	OPT_BYTE,
	LOOP_BEG,
	LOOP_END,
	NONE
};

#endif //EX03_BRAINFUCK_H
