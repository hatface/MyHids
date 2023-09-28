//
// Created by 孔振 on 2023/9/28.
//

#include "vmlinux.h"

SEC("kprobe/commit_creds")
int BPF_KPROBE(kprobe_commit_creds)
{
    ;
}