// Edit By Warft_TigerCN

define {
    
    while = whilenot not

    // ��������a��ֵ������������b��cʹ�õ�����Ȩ���൱��C���������Ŀ������� ?:����
    SetPriority(a, b, c) = { if a { return b; } else { return c; } }

    // ������ѭ����䣬����var��Ϊ���Ʊ���������������const���������ִ����Ӧ��cont
    // �����������򷵻�Ĭ�ϵ�defֵ��������C�������switchѭ����䡣���¸���������չ��
    // ���ӵ��10��������һ��Ĭ��ֵ�������ٵ�ӵ��3��������

    SwitchMany(var, const1, cont1, const2, cont2, const3, cont3, def) = {
        if(var == const1) {
            cont1;
            return;
        }
        elseif(var == const2) {
            cont2;
            return;
        }
        elseif(var == const3) {
            cont3;
            return;
        }
        else {
            def;
            return;
        }
    }

}