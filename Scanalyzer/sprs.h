sprtb sprs[] = {
	{    0, "mq", sprNorm, -1},
	{    1, "xer", sprNorm, sPxer},
	{    2, "", sprNorm, -1},
	{    3, "", sprNorm, -1},
	{    4, "rtcu", sprNorm, -1},
	{    5, "rtcl", sprNorm, -1},
	{    6, "", sprNorm, -1},
	{    7, "", sprNorm, -1},
	{    8, "lr", sprLR, sPlr},
	{    9, "ctr", sprCTR, sPctr},
	{   10, "", sprNorm, -1},
	{   11, "", sprNorm, -1},
	{   12, "", sprNorm, -1},
	{   13, "", sprNorm, -1},
	{   14, "", sprNorm, -1},
	{   15, "", sprNorm, -1},
	{   16, "", sprNorm, -1},
	{   17, "", sprNorm, -1},
	{   18, "dsisr", sprPriv, -1},
	{   19, "dar", sprPriv, -1},
	{   20, "", sprNorm, -1},
	{   21, "", sprNorm, -1},
	{   22, "dec", sprPriv, -1},
	{   23, "", sprNorm, -1},
	{   24, "", sprNorm, -1},
	{   25, "sdr1", sprPriv, -1},
	{   26, "srr0", sprPriv, -1},
	{   27, "srr1", sprPriv, -1},
	{   28, "", sprNorm, -1},
	{   29, "accr", sprPriv, -1},
	{   30, "", sprNorm, -1},
	{   31, "", sprNorm, -1},
	{   32, "", sprNorm, -1},
	{   33, "", sprNorm, -1},
	{   34, "", sprNorm, -1},
	{   35, "", sprNorm, -1},
	{   36, "", sprNorm, -1},
	{   37, "", sprNorm, -1},
	{   38, "", sprNorm, -1},
	{   39, "", sprNorm, -1},
	{   40, "", sprNorm, -1},
	{   41, "", sprNorm, -1},
	{   42, "", sprNorm, -1},
	{   43, "", sprNorm, -1},
	{   44, "", sprNorm, -1},
	{   45, "", sprNorm, -1},
	{   46, "", sprNorm, -1},
	{   47, "", sprNorm, -1},
	{   48, "", sprNorm, -1},
	{   49, "", sprNorm, -1},
	{   50, "", sprNorm, -1},
	{   51, "", sprNorm, -1},
	{   52, "", sprNorm, -1},
	{   53, "", sprNorm, -1},
	{   54, "", sprNorm, -1},
	{   55, "", sprNorm, -1},
	{   56, "", sprNorm, -1},
	{   57, "", sprNorm, -1},
	{   58, "", sprNorm, -1},
	{   59, "", sprNorm, -1},
	{   60, "", sprNorm, -1},
	{   61, "", sprNorm, -1},
	{   62, "", sprNorm, -1},
	{   63, "", sprNorm, -1},
	{   64, "", sprNorm, -1},
	{   65, "", sprNorm, -1},
	{   66, "", sprNorm, -1},
	{   67, "", sprNorm, -1},
	{   68, "", sprNorm, -1},
	{   69, "", sprNorm, -1},
	{   70, "", sprNorm, -1},
	{   71, "", sprNorm, -1},
	{   72, "", sprNorm, -1},
	{   73, "", sprNorm, -1},
	{   74, "", sprNorm, -1},
	{   75, "", sprNorm, -1},
	{   76, "", sprNorm, -1},
	{   77, "", sprNorm, -1},
	{   78, "", sprNorm, -1},
	{   79, "", sprNorm, -1},
	{   80, "", sprNorm, -1},
	{   81, "", sprNorm, -1},
	{   82, "", sprNorm, -1},
	{   83, "", sprNorm, -1},
	{   84, "", sprNorm, -1},
	{   85, "", sprNorm, -1},
	{   86, "", sprNorm, -1},
	{   87, "", sprNorm, -1},
	{   88, "", sprNorm, -1},
	{   89, "", sprNorm, -1},
	{   90, "", sprNorm, -1},
	{   91, "", sprNorm, -1},
	{   92, "", sprNorm, -1},
	{   93, "", sprNorm, -1},
	{   94, "", sprNorm, -1},
	{   95, "", sprNorm, -1},
	{   96, "", sprNorm, -1},
	{   97, "", sprNorm, -1},
	{   98, "", sprNorm, -1},
	{   99, "", sprNorm, -1},
	{  100, "", sprNorm, -1},
	{  101, "", sprNorm, -1},
	{  102, "", sprNorm, -1},
	{  103, "", sprNorm, -1},
	{  104, "", sprNorm, -1},
	{  105, "", sprNorm, -1},
	{  106, "", sprNorm, -1},
	{  107, "", sprNorm, -1},
	{  108, "", sprNorm, -1},
	{  109, "", sprNorm, -1},
	{  110, "", sprNorm, -1},
	{  111, "", sprNorm, -1},
	{  112, "", sprNorm, -1},
	{  113, "", sprNorm, -1},
	{  114, "", sprNorm, -1},
	{  115, "", sprNorm, -1},
	{  116, "", sprNorm, -1},
	{  117, "", sprNorm, -1},
	{  118, "", sprNorm, -1},
	{  119, "", sprNorm, -1},
	{  120, "", sprNorm, -1},
	{  121, "", sprNorm, -1},
	{  122, "", sprNorm, -1},
	{  123, "", sprNorm, -1},
	{  124, "", sprNorm, -1},
	{  125, "", sprNorm, -1},
	{  126, "", sprNorm, -1},
	{  127, "", sprNorm, -1},
	{  128, "", sprNorm, -1},
	{  129, "", sprNorm, -1},
	{  130, "", sprNorm, -1},
	{  131, "", sprNorm, -1},
	{  132, "", sprNorm, -1},
	{  133, "", sprNorm, -1},
	{  134, "", sprNorm, -1},
	{  135, "", sprNorm, -1},
	{  136, "ctrl", sprNorm, -1},
	{  137, "", sprNorm, -1},
	{  138, "", sprNorm, -1},
	{  139, "", sprNorm, -1},
	{  140, "", sprNorm, -1},
	{  141, "", sprNorm, -1},
	{  142, "", sprNorm, -1},
	{  143, "", sprNorm, -1},
	{  144, "", sprNorm, -1},
	{  145, "", sprNorm, -1},
	{  146, "", sprNorm, -1},
	{  147, "", sprNorm, -1},
	{  148, "", sprNorm, -1},
	{  149, "", sprNorm, -1},
	{  150, "", sprNorm, -1},
	{  151, "", sprNorm, -1},
	{  152, "ctrl", sprPriv, -1},
	{  153, "", sprNorm, -1},
	{  154, "", sprNorm, -1},
	{  155, "", sprNorm, -1},
	{  156, "", sprNorm, -1},
	{  157, "", sprNorm, -1},
	{  158, "", sprNorm, -1},
	{  159, "", sprNorm, -1},
	{  160, "", sprNorm, -1},
	{  161, "", sprNorm, -1},
	{  162, "", sprNorm, -1},
	{  163, "", sprNorm, -1},
	{  164, "", sprNorm, -1},
	{  165, "", sprNorm, -1},
	{  166, "", sprNorm, -1},
	{  167, "", sprNorm, -1},
	{  168, "", sprNorm, -1},
	{  169, "", sprNorm, -1},
	{  170, "", sprNorm, -1},
	{  171, "", sprNorm, -1},
	{  172, "", sprNorm, -1},
	{  173, "", sprNorm, -1},
	{  174, "", sprNorm, -1},
	{  175, "", sprNorm, -1},
	{  176, "", sprNorm, -1},
	{  177, "", sprNorm, -1},
	{  178, "", sprNorm, -1},
	{  179, "", sprNorm, -1},
	{  180, "", sprNorm, -1},
	{  181, "", sprNorm, -1},
	{  182, "", sprNorm, -1},
	{  183, "", sprNorm, -1},
	{  184, "", sprNorm, -1},
	{  185, "", sprNorm, -1},
	{  186, "", sprNorm, -1},
	{  187, "", sprNorm, -1},
	{  188, "", sprNorm, -1},
	{  189, "", sprNorm, -1},
	{  190, "", sprNorm, -1},
	{  191, "", sprNorm, -1},
	{  192, "", sprNorm, -1},
	{  193, "", sprNorm, -1},
	{  194, "", sprNorm, -1},
	{  195, "", sprNorm, -1},
	{  196, "", sprNorm, -1},
	{  197, "", sprNorm, -1},
	{  198, "", sprNorm, -1},
	{  199, "", sprNorm, -1},
	{  200, "", sprNorm, -1},
	{  201, "", sprNorm, -1},
	{  202, "", sprNorm, -1},
	{  203, "", sprNorm, -1},
	{  204, "", sprNorm, -1},
	{  205, "", sprNorm, -1},
	{  206, "", sprNorm, -1},
	{  207, "", sprNorm, -1},
	{  208, "", sprNorm, -1},
	{  209, "", sprNorm, -1},
	{  210, "", sprNorm, -1},
	{  211, "", sprNorm, -1},
	{  212, "", sprNorm, -1},
	{  213, "", sprNorm, -1},
	{  214, "", sprNorm, -1},
	{  215, "", sprNorm, -1},
	{  216, "", sprNorm, -1},
	{  217, "", sprNorm, -1},
	{  218, "", sprNorm, -1},
	{  219, "", sprNorm, -1},
	{  220, "", sprNorm, -1},
	{  221, "", sprNorm, -1},
	{  222, "", sprNorm, -1},
	{  223, "", sprNorm, -1},
	{  224, "", sprNorm, -1},
	{  225, "", sprNorm, -1},
	{  226, "", sprNorm, -1},
	{  227, "", sprNorm, -1},
	{  228, "", sprNorm, -1},
	{  229, "", sprNorm, -1},
	{  230, "", sprNorm, -1},
	{  231, "", sprNorm, -1},
	{  232, "", sprNorm, -1},
	{  233, "", sprNorm, -1},
	{  234, "", sprNorm, -1},
	{  235, "", sprNorm, -1},
	{  236, "", sprNorm, -1},
	{  237, "", sprNorm, -1},
	{  238, "", sprNorm, -1},
	{  239, "", sprNorm, -1},
	{  240, "", sprNorm, -1},
	{  241, "", sprNorm, -1},
	{  242, "", sprNorm, -1},
	{  243, "", sprNorm, -1},
	{  244, "", sprNorm, -1},
	{  245, "", sprNorm, -1},
	{  246, "", sprNorm, -1},
	{  247, "", sprNorm, -1},
	{  248, "", sprNorm, -1},
	{  249, "", sprNorm, -1},
	{  250, "", sprNorm, -1},
	{  251, "", sprNorm, -1},
	{  252, "", sprNorm, -1},
	{  253, "", sprNorm, -1},
	{  254, "", sprNorm, -1},
	{  255, "", sprNorm, -1},
	{  256, "vrsave", sprNorm, sPvrsave},
	{  257, "", sprNorm, -1},
	{  258, "", sprNorm, -1},
	{  259, "usprg3", sprNorm, -1},
	{  260, "", sprNorm, -1},
	{  261, "", sprNorm, -1},
	{  262, "", sprNorm, -1},
	{  263, "", sprNorm, -1},
	{  264, "", sprNorm, -1},
	{  265, "", sprNorm, -1},
	{  266, "", sprNorm, -1},
	{  267, "", sprNorm, -1},
	{  268, "tb", sprNorm, -1},
	{  269, "tbu", sprNorm, -1},
	{  270, "", sprNorm, -1},
	{  271, "", sprNorm, -1},
	{  272, "sprg0", sprPriv, -1},
	{  273, "sprg1", sprPriv, -1},
	{  274, "sprg2", sprPriv, -1},
	{  275, "sprg3", sprPriv, -1},
	{  276, "scomc", sprPriv, -1},
	{  277, "scomd", sprPriv, -1},
	{  278, "", sprNorm, -1},
	{  279, "", sprNorm, -1},
	{  280, "asr", sprPriv, -1},
	{  281, "", sprNorm, -1},
	{  282, "ear", sprPriv, -1},
	{  283, "", sprNorm, -1},
	{  284, "tbl", sprNorm, -1},
	{  285, "tbu", sprNorm, -1},
	{  286, "", sprNorm, -1},
	{  287, "pvr", sprPriv, -1},
	{  288, "", sprNorm, -1},
	{  289, "", sprNorm, -1},
	{  290, "", sprNorm, -1},
	{  291, "", sprNorm, -1},
	{  292, "", sprNorm, -1},
	{  293, "", sprNorm, -1},
	{  294, "", sprNorm, -1},
	{  295, "", sprNorm, -1},
	{  296, "", sprNorm, -1},
	{  297, "", sprNorm, -1},
	{  298, "", sprNorm, -1},
	{  299, "", sprNorm, -1},
	{  300, "", sprNorm, -1},
	{  301, "", sprNorm, -1},
	{  302, "", sprNorm, -1},
	{  303, "", sprNorm, -1},
	{  304, "hsprg0", sprPriv, -1},
	{  305, "hsprg1", sprPriv, -1},
	{  306, "", sprNorm, -1},
	{  307, "", sprNorm, -1},
	{  308, "", sprNorm, -1},
	{  309, "", sprNorm, -1},
	{  310, "hdec", sprPriv, -1},
	{  311, "hior", sprPriv, -1},
	{  312, "rmor", sprPriv, -1},
	{  313, "hrmor", sprPriv, -1},
	{  314, "hsrr0", sprPriv, -1},
	{  315, "hsrr1", sprPriv, -1},
	{  316, "", sprNorm, -1},
	{  317, "", sprNorm, -1},
	{  318, "lpcr", sprPriv, -1},
	{  319, "lpidr", sprPriv, -1},
	{  320, "", sprNorm, -1},
	{  321, "", sprNorm, -1},
	{  322, "", sprNorm, -1},
	{  323, "", sprNorm, -1},
	{  324, "", sprNorm, -1},
	{  325, "", sprNorm, -1},
	{  326, "", sprNorm, -1},
	{  327, "", sprNorm, -1},
	{  328, "", sprNorm, -1},
	{  329, "", sprNorm, -1},
	{  330, "", sprNorm, -1},
	{  331, "", sprNorm, -1},
	{  332, "", sprNorm, -1},
	{  333, "", sprNorm, -1},
	{  334, "", sprNorm, -1},
	{  335, "", sprNorm, -1},
	{  336, "", sprNorm, -1},
	{  337, "", sprNorm, -1},
	{  338, "", sprNorm, -1},
	{  339, "", sprNorm, -1},
	{  340, "", sprNorm, -1},
	{  341, "", sprNorm, -1},
	{  342, "", sprNorm, -1},
	{  343, "", sprNorm, -1},
	{  344, "", sprNorm, -1},
	{  345, "", sprNorm, -1},
	{  346, "", sprNorm, -1},
	{  347, "", sprNorm, -1},
	{  348, "", sprNorm, -1},
	{  349, "", sprNorm, -1},
	{  350, "", sprNorm, -1},
	{  351, "", sprNorm, -1},
	{  352, "", sprNorm, -1},
	{  353, "", sprNorm, -1},
	{  354, "", sprNorm, -1},
	{  355, "", sprNorm, -1},
	{  356, "", sprNorm, -1},
	{  357, "", sprNorm, -1},
	{  358, "", sprNorm, -1},
	{  359, "", sprNorm, -1},
	{  360, "", sprNorm, -1},
	{  361, "", sprNorm, -1},
	{  362, "", sprNorm, -1},
	{  363, "", sprNorm, -1},
	{  364, "", sprNorm, -1},
	{  365, "", sprNorm, -1},
	{  366, "", sprNorm, -1},
	{  367, "", sprNorm, -1},
	{  368, "", sprNorm, -1},
	{  369, "", sprNorm, -1},
	{  370, "", sprNorm, -1},
	{  371, "", sprNorm, -1},
	{  372, "", sprNorm, -1},
	{  373, "", sprNorm, -1},
	{  374, "", sprNorm, -1},
	{  375, "", sprNorm, -1},
	{  376, "", sprNorm, -1},
	{  377, "", sprNorm, -1},
	{  378, "", sprNorm, -1},
	{  379, "", sprNorm, -1},
	{  380, "", sprNorm, -1},
	{  381, "", sprNorm, -1},
	{  382, "", sprNorm, -1},
	{  383, "", sprNorm, -1},
	{  384, "", sprNorm, -1},
	{  385, "", sprNorm, -1},
	{  386, "", sprNorm, -1},
	{  387, "", sprNorm, -1},
	{  388, "", sprNorm, -1},
	{  389, "", sprNorm, -1},
	{  390, "", sprNorm, -1},
	{  391, "", sprNorm, -1},
	{  392, "", sprNorm, -1},
	{  393, "", sprNorm, -1},
	{  394, "", sprNorm, -1},
	{  395, "", sprNorm, -1},
	{  396, "", sprNorm, -1},
	{  397, "", sprNorm, -1},
	{  398, "", sprNorm, -1},
	{  399, "", sprNorm, -1},
	{  400, "", sprNorm, -1},
	{  401, "", sprNorm, -1},
	{  402, "", sprNorm, -1},
	{  403, "", sprNorm, -1},
	{  404, "", sprNorm, -1},
	{  405, "", sprNorm, -1},
	{  406, "", sprNorm, -1},
	{  407, "", sprNorm, -1},
	{  408, "", sprNorm, -1},
	{  409, "", sprNorm, -1},
	{  410, "", sprNorm, -1},
	{  411, "", sprNorm, -1},
	{  412, "", sprNorm, -1},
	{  413, "", sprNorm, -1},
	{  414, "", sprNorm, -1},
	{  415, "", sprNorm, -1},
	{  416, "", sprNorm, -1},
	{  417, "", sprNorm, -1},
	{  418, "", sprNorm, -1},
	{  419, "", sprNorm, -1},
	{  420, "", sprNorm, -1},
	{  421, "", sprNorm, -1},
	{  422, "", sprNorm, -1},
	{  423, "", sprNorm, -1},
	{  424, "", sprNorm, -1},
	{  425, "", sprNorm, -1},
	{  426, "", sprNorm, -1},
	{  427, "", sprNorm, -1},
	{  428, "", sprNorm, -1},
	{  429, "", sprNorm, -1},
	{  430, "", sprNorm, -1},
	{  431, "", sprNorm, -1},
	{  432, "", sprNorm, -1},
	{  433, "", sprNorm, -1},
	{  434, "", sprNorm, -1},
	{  435, "", sprNorm, -1},
	{  436, "", sprNorm, -1},
	{  437, "", sprNorm, -1},
	{  438, "", sprNorm, -1},
	{  439, "", sprNorm, -1},
	{  440, "", sprNorm, -1},
	{  441, "", sprNorm, -1},
	{  442, "", sprNorm, -1},
	{  443, "", sprNorm, -1},
	{  444, "", sprNorm, -1},
	{  445, "", sprNorm, -1},
	{  446, "", sprNorm, -1},
	{  447, "", sprNorm, -1},
	{  448, "", sprNorm, -1},
	{  449, "", sprNorm, -1},
	{  450, "", sprNorm, -1},
	{  451, "", sprNorm, -1},
	{  452, "", sprNorm, -1},
	{  453, "", sprNorm, -1},
	{  454, "", sprNorm, -1},
	{  455, "", sprNorm, -1},
	{  456, "", sprNorm, -1},
	{  457, "", sprNorm, -1},
	{  458, "", sprNorm, -1},
	{  459, "", sprNorm, -1},
	{  460, "", sprNorm, -1},
	{  461, "", sprNorm, -1},
	{  462, "", sprNorm, -1},
	{  463, "", sprNorm, -1},
	{  464, "", sprNorm, -1},
	{  465, "", sprNorm, -1},
	{  466, "", sprNorm, -1},
	{  467, "", sprNorm, -1},
	{  468, "", sprNorm, -1},
	{  469, "", sprNorm, -1},
	{  470, "", sprNorm, -1},
	{  471, "", sprNorm, -1},
	{  472, "", sprNorm, -1},
	{  473, "", sprNorm, -1},
	{  474, "", sprNorm, -1},
	{  475, "", sprNorm, -1},
	{  476, "", sprNorm, -1},
	{  477, "", sprNorm, -1},
	{  478, "", sprNorm, -1},
	{  479, "", sprNorm, -1},
	{  480, "", sprNorm, -1},
	{  481, "", sprNorm, -1},
	{  482, "", sprNorm, -1},
	{  483, "", sprNorm, -1},
	{  484, "", sprNorm, -1},
	{  485, "", sprNorm, -1},
	{  486, "", sprNorm, -1},
	{  487, "", sprNorm, -1},
	{  488, "", sprNorm, -1},
	{  489, "", sprNorm, -1},
	{  490, "", sprNorm, -1},
	{  491, "", sprNorm, -1},
	{  492, "", sprNorm, -1},
	{  493, "", sprNorm, -1},
	{  494, "", sprNorm, -1},
	{  495, "", sprNorm, -1},
	{  496, "", sprNorm, -1},
	{  497, "", sprNorm, -1},
	{  498, "", sprNorm, -1},
	{  499, "", sprNorm, -1},
	{  500, "", sprNorm, -1},
	{  501, "", sprNorm, -1},
	{  502, "", sprNorm, -1},
	{  503, "", sprNorm, -1},
	{  504, "", sprNorm, -1},
	{  505, "", sprNorm, -1},
	{  506, "", sprNorm, -1},
	{  507, "", sprNorm, -1},
	{  508, "", sprNorm, -1},
	{  509, "", sprNorm, -1},
	{  510, "", sprNorm, -1},
	{  511, "", sprNorm, -1},
	{  512, "", sprNorm, -1},
	{  513, "", sprNorm, -1},
	{  514, "", sprNorm, -1},
	{  515, "", sprNorm, -1},
	{  516, "", sprNorm, -1},
	{  517, "", sprNorm, -1},
	{  518, "", sprNorm, -1},
	{  519, "", sprNorm, -1},
	{  520, "", sprNorm, -1},
	{  521, "", sprNorm, -1},
	{  522, "", sprNorm, -1},
	{  523, "", sprNorm, -1},
	{  524, "", sprNorm, -1},
	{  525, "", sprNorm, -1},
	{  526, "", sprNorm, -1},
	{  527, "", sprNorm, -1},
	{  528, "ibat0u", sprPriv, -1},
	{  529, "ibat0l", sprPriv, -1},
	{  530, "ibat1u", sprPriv, -1},
	{  531, "ibat1l", sprPriv, -1},
	{  532, "ibat2u", sprPriv, -1},
	{  533, "ibat2l", sprPriv, -1},
	{  534, "ibat3u", sprPriv, -1},
	{  535, "ibat3l", sprPriv, -1},
	{  536, "dbat0u", sprPriv, -1},
	{  537, "dbat0l", sprPriv, -1},
	{  538, "dbat1u", sprPriv, -1},
	{  539, "dbat1l", sprPriv, -1},
	{  540, "dbat2u", sprPriv, -1},
	{  541, "dbat2l", sprPriv, -1},
	{  542, "dbat3u", sprPriv, -1},
	{  543, "dbat3l", sprPriv, -1},
	{  544, "", sprNorm, -1},
	{  545, "", sprNorm, -1},
	{  546, "", sprNorm, -1},
	{  547, "", sprNorm, -1},
	{  548, "", sprNorm, -1},
	{  549, "", sprNorm, -1},
	{  550, "", sprNorm, -1},
	{  551, "", sprNorm, -1},
	{  552, "", sprNorm, -1},
	{  553, "", sprNorm, -1},
	{  554, "", sprNorm, -1},
	{  555, "", sprNorm, -1},
	{  556, "", sprNorm, -1},
	{  557, "", sprNorm, -1},
	{  558, "", sprNorm, -1},
	{  559, "", sprNorm, -1},
	{  560, "", sprNorm, -1},
	{  561, "", sprNorm, -1},
	{  562, "", sprNorm, -1},
	{  563, "", sprNorm, -1},
	{  564, "", sprNorm, -1},
	{  565, "", sprNorm, -1},
	{  566, "", sprNorm, -1},
	{  567, "", sprNorm, -1},
	{  568, "", sprNorm, -1},
	{  569, "", sprNorm, -1},
	{  570, "", sprNorm, -1},
	{  571, "", sprNorm, -1},
	{  572, "", sprNorm, -1},
	{  573, "", sprNorm, -1},
	{  574, "", sprNorm, -1},
	{  575, "", sprNorm, -1},
	{  576, "slbie", sprPriv, -1},
	{  577, "slbia", sprPriv, -1},
	{  578, "", sprNorm, -1},
	{  579, "", sprNorm, -1},
	{  580, "", sprNorm, -1},
	{  581, "", sprNorm, -1},
	{  582, "", sprNorm, -1},
	{  583, "", sprNorm, -1},
	{  584, "", sprNorm, -1},
	{  585, "", sprNorm, -1},
	{  586, "", sprNorm, -1},
	{  587, "", sprNorm, -1},
	{  588, "", sprNorm, -1},
	{  589, "", sprNorm, -1},
	{  590, "", sprNorm, -1},
	{  591, "", sprNorm, -1},
	{  592, "", sprNorm, -1},
	{  593, "", sprNorm, -1},
	{  594, "", sprNorm, -1},
	{  595, "", sprNorm, -1},
	{  596, "", sprNorm, -1},
	{  597, "", sprNorm, -1},
	{  598, "", sprNorm, -1},
	{  599, "", sprNorm, -1},
	{  600, "", sprNorm, -1},
	{  601, "", sprNorm, -1},
	{  602, "", sprNorm, -1},
	{  603, "", sprNorm, -1},
	{  604, "", sprNorm, -1},
	{  605, "", sprNorm, -1},
	{  606, "", sprNorm, -1},
	{  607, "", sprNorm, -1},
	{  608, "", sprNorm, -1},
	{  609, "", sprNorm, -1},
	{  610, "", sprNorm, -1},
	{  611, "", sprNorm, -1},
	{  612, "", sprNorm, -1},
	{  613, "", sprNorm, -1},
	{  614, "", sprNorm, -1},
	{  615, "", sprNorm, -1},
	{  616, "", sprNorm, -1},
	{  617, "", sprNorm, -1},
	{  618, "", sprNorm, -1},
	{  619, "", sprNorm, -1},
	{  620, "", sprNorm, -1},
	{  621, "", sprNorm, -1},
	{  622, "", sprNorm, -1},
	{  623, "", sprNorm, -1},
	{  624, "", sprNorm, -1},
	{  625, "", sprNorm, -1},
	{  626, "", sprNorm, -1},
	{  627, "", sprNorm, -1},
	{  628, "", sprNorm, -1},
	{  629, "", sprNorm, -1},
	{  630, "", sprNorm, -1},
	{  631, "", sprNorm, -1},
	{  632, "", sprNorm, -1},
	{  633, "", sprNorm, -1},
	{  634, "", sprNorm, -1},
	{  635, "", sprNorm, -1},
	{  636, "", sprNorm, -1},
	{  637, "", sprNorm, -1},
	{  638, "", sprNorm, -1},
	{  639, "", sprNorm, -1},
	{  640, "", sprNorm, -1},
	{  641, "", sprNorm, -1},
	{  642, "", sprNorm, -1},
	{  643, "", sprNorm, -1},
	{  644, "", sprNorm, -1},
	{  645, "", sprNorm, -1},
	{  646, "", sprNorm, -1},
	{  647, "", sprNorm, -1},
	{  648, "", sprNorm, -1},
	{  649, "", sprNorm, -1},
	{  650, "", sprNorm, -1},
	{  651, "", sprNorm, -1},
	{  652, "", sprNorm, -1},
	{  653, "", sprNorm, -1},
	{  654, "", sprNorm, -1},
	{  655, "", sprNorm, -1},
	{  656, "", sprNorm, -1},
	{  657, "", sprNorm, -1},
	{  658, "", sprNorm, -1},
	{  659, "", sprNorm, -1},
	{  660, "", sprNorm, -1},
	{  661, "", sprNorm, -1},
	{  662, "", sprNorm, -1},
	{  663, "", sprNorm, -1},
	{  664, "", sprNorm, -1},
	{  665, "", sprNorm, -1},
	{  666, "", sprNorm, -1},
	{  667, "", sprNorm, -1},
	{  668, "", sprNorm, -1},
	{  669, "", sprNorm, -1},
	{  670, "", sprNorm, -1},
	{  671, "", sprNorm, -1},
	{  672, "slb_index", sprPriv, -1},
	{  673, "", sprNorm, -1},
	{  674, "", sprNorm, -1},
	{  675, "", sprNorm, -1},
	{  676, "", sprNorm, -1},
	{  677, "", sprNorm, -1},
	{  678, "", sprNorm, -1},
	{  679, "", sprNorm, -1},
	{  680, "", sprNorm, -1},
	{  681, "", sprNorm, -1},
	{  682, "", sprNorm, -1},
	{  683, "", sprNorm, -1},
	{  684, "", sprNorm, -1},
	{  685, "", sprNorm, -1},
	{  686, "", sprNorm, -1},
	{  687, "", sprNorm, -1},
	{  688, "", sprNorm, -1},
	{  689, "", sprNorm, -1},
	{  690, "", sprNorm, -1},
	{  691, "", sprNorm, -1},
	{  692, "", sprNorm, -1},
	{  693, "", sprNorm, -1},
	{  694, "", sprNorm, -1},
	{  695, "", sprNorm, -1},
	{  696, "", sprNorm, -1},
	{  697, "", sprNorm, -1},
	{  698, "", sprNorm, -1},
	{  699, "", sprNorm, -1},
	{  700, "", sprNorm, -1},
	{  701, "", sprNorm, -1},
	{  702, "", sprNorm, -1},
	{  703, "", sprNorm, -1},
	{  704, "slb_vsid", sprPriv, -1},
	{  705, "", sprNorm, -1},
	{  706, "", sprNorm, -1},
	{  707, "", sprNorm, -1},
	{  708, "", sprNorm, -1},
	{  709, "", sprNorm, -1},
	{  710, "", sprNorm, -1},
	{  711, "", sprNorm, -1},
	{  712, "", sprNorm, -1},
	{  713, "", sprNorm, -1},
	{  714, "", sprNorm, -1},
	{  715, "", sprNorm, -1},
	{  716, "", sprNorm, -1},
	{  717, "", sprNorm, -1},
	{  718, "", sprNorm, -1},
	{  719, "", sprNorm, -1},
	{  720, "", sprNorm, -1},
	{  721, "", sprNorm, -1},
	{  722, "", sprNorm, -1},
	{  723, "", sprNorm, -1},
	{  724, "", sprNorm, -1},
	{  725, "", sprNorm, -1},
	{  726, "", sprNorm, -1},
	{  727, "", sprNorm, -1},
	{  728, "", sprNorm, -1},
	{  729, "", sprNorm, -1},
	{  730, "", sprNorm, -1},
	{  731, "", sprNorm, -1},
	{  732, "", sprNorm, -1},
	{  733, "", sprNorm, -1},
	{  734, "", sprNorm, -1},
	{  735, "", sprNorm, -1},
	{  736, "slb_esid", sprPriv, -1},
	{  737, "", sprNorm, -1},
	{  738, "", sprNorm, -1},
	{  739, "", sprNorm, -1},
	{  740, "", sprNorm, -1},
	{  741, "", sprNorm, -1},
	{  742, "", sprNorm, -1},
	{  743, "", sprNorm, -1},
	{  744, "", sprNorm, -1},
	{  745, "", sprNorm, -1},
	{  746, "", sprNorm, -1},
	{  747, "", sprNorm, -1},
	{  748, "", sprNorm, -1},
	{  749, "", sprNorm, -1},
	{  750, "", sprNorm, -1},
	{  751, "", sprNorm, -1},
	{  752, "", sprNorm, -1},
	{  753, "", sprNorm, -1},
	{  754, "", sprNorm, -1},
	{  755, "", sprNorm, -1},
	{  756, "", sprNorm, -1},
	{  757, "", sprNorm, -1},
	{  758, "", sprNorm, -1},
	{  759, "", sprNorm, -1},
	{  760, "", sprNorm, -1},
	{  761, "", sprNorm, -1},
	{  762, "", sprNorm, -1},
	{  763, "", sprNorm, -1},
	{  764, "", sprNorm, -1},
	{  765, "", sprNorm, -1},
	{  766, "", sprNorm, -1},
	{  767, "", sprNorm, -1},
	{  768, "msr", sprPriv, -1},
	{  769, "", sprNorm, -1},
	{  770, "ummcra", sprNorm, -1},
	{  771, "upmc1", sprNorm, -1},
	{  772, "upmc2", sprNorm, -1},
	{  773, "upmc3", sprNorm, -1},
	{  774, "upmc4", sprNorm, -1},
	{  775, "upmc5", sprNorm, -1},
	{  776, "upmc6", sprNorm, -1},
	{  777, "upmc7", sprNorm, -1},
	{  778, "upmc8", sprNorm, -1},
	{  779, "ummcr0", sprNorm, -1},
	{  780, "usiar", sprNorm, -1},
	{  781, "usdar", sprNorm, -1},
	{  782, "ummcr1", sprNorm, -1},
	{  783, "uimc", sprNorm, -1},
	{  784, "", sprNorm, -1},
	{  785, "", sprNorm, -1},
	{  786, "mmcra", sprPriv, -1},
	{  787, "pmc1", sprPriv, -1},
	{  788, "pmc2", sprPriv, -1},
	{  789, "pmc3", sprPriv, -1},
	{  790, "pmc4", sprPriv, -1},
	{  791, "pmc5", sprPriv, -1},
	{  792, "pmc6", sprPriv, -1},
	{  793, "pmc7", sprPriv, -1},
	{  794, "pmc8", sprPriv, -1},
	{  795, "mmcr0", sprPriv, -1},
	{  796, "siar", sprPriv, -1},
	{  797, "sdar", sprPriv, -1},
	{  798, "mmcr1", sprPriv, -1},
	{  799, "imc", sprPriv, -1},
	{  800, "msrd", sprPriv, -1},
	{  801, "", sprNorm, -1},
	{  802, "", sprNorm, -1},
	{  803, "", sprNorm, -1},
	{  804, "", sprNorm, -1},
	{  805, "", sprNorm, -1},
	{  806, "", sprNorm, -1},
	{  807, "", sprNorm, -1},
	{  808, "", sprNorm, -1},
	{  809, "", sprNorm, -1},
	{  810, "", sprNorm, -1},
	{  811, "", sprNorm, -1},
	{  812, "", sprNorm, -1},
	{  813, "", sprNorm, -1},
	{  814, "", sprNorm, -1},
	{  815, "", sprNorm, -1},
	{  816, "", sprNorm, -1},
	{  817, "", sprNorm, -1},
	{  818, "", sprNorm, -1},
	{  819, "", sprNorm, -1},
	{  820, "", sprNorm, -1},
	{  821, "", sprNorm, -1},
	{  822, "", sprNorm, -1},
	{  823, "", sprNorm, -1},
	{  824, "", sprNorm, -1},
	{  825, "", sprNorm, -1},
	{  826, "", sprNorm, -1},
	{  827, "", sprNorm, -1},
	{  828, "", sprNorm, -1},
	{  829, "", sprNorm, -1},
	{  830, "", sprNorm, -1},
	{  831, "", sprNorm, -1},
	{  832, "", sprNorm, -1},
	{  833, "", sprNorm, -1},
	{  834, "", sprNorm, -1},
	{  835, "", sprNorm, -1},
	{  836, "", sprNorm, -1},
	{  837, "", sprNorm, -1},
	{  838, "", sprNorm, -1},
	{  839, "", sprNorm, -1},
	{  840, "", sprNorm, -1},
	{  841, "", sprNorm, -1},
	{  842, "", sprNorm, -1},
	{  843, "", sprNorm, -1},
	{  844, "", sprNorm, -1},
	{  845, "", sprNorm, -1},
	{  846, "", sprNorm, -1},
	{  847, "", sprNorm, -1},
	{  848, "", sprNorm, -1},
	{  849, "", sprNorm, -1},
	{  850, "", sprNorm, -1},
	{  851, "", sprNorm, -1},
	{  852, "", sprNorm, -1},
	{  853, "", sprNorm, -1},
	{  854, "", sprNorm, -1},
	{  855, "", sprNorm, -1},
	{  856, "", sprNorm, -1},
	{  857, "", sprNorm, -1},
	{  858, "", sprNorm, -1},
	{  859, "", sprNorm, -1},
	{  860, "", sprNorm, -1},
	{  861, "", sprNorm, -1},
	{  862, "", sprNorm, -1},
	{  863, "", sprNorm, -1},
	{  864, "crcrf", sprPriv, -1},
	{  865, "", sprNorm, -1},
	{  866, "", sprNorm, -1},
	{  867, "", sprNorm, -1},
	{  868, "", sprNorm, -1},
	{  869, "", sprNorm, -1},
	{  870, "", sprNorm, -1},
	{  871, "", sprNorm, -1},
	{  872, "", sprNorm, -1},
	{  873, "", sprNorm, -1},
	{  874, "", sprNorm, -1},
	{  875, "", sprNorm, -1},
	{  876, "", sprNorm, -1},
	{  877, "", sprNorm, -1},
	{  878, "", sprNorm, -1},
	{  879, "", sprNorm, -1},
	{  880, "", sprNorm, -1},
	{  881, "", sprNorm, -1},
	{  882, "", sprNorm, -1},
	{  883, "", sprNorm, -1},
	{  884, "", sprNorm, -1},
	{  885, "", sprNorm, -1},
	{  886, "", sprNorm, -1},
	{  887, "", sprNorm, -1},
	{  888, "", sprNorm, -1},
	{  889, "", sprNorm, -1},
	{  890, "", sprNorm, -1},
	{  891, "", sprNorm, -1},
	{  892, "", sprNorm, -1},
	{  893, "", sprNorm, -1},
	{  894, "", sprNorm, -1},
	{  895, "", sprNorm, -1},
	{  896, "tsrl", sprNorm, -1},
	{  897, "tsrr", sprNorm, -1},
	{  898, "", sprNorm, -1},
	{  899, "", sprNorm, -1},
	{  900, "", sprNorm, -1},
	{  901, "", sprNorm, -1},
	{  902, "", sprNorm, -1},
	{  903, "", sprNorm, -1},
	{  904, "", sprNorm, -1},
	{  905, "", sprNorm, -1},
	{  906, "", sprNorm, -1},
	{  907, "", sprNorm, -1},
	{  908, "", sprNorm, -1},
	{  909, "", sprNorm, -1},
	{  910, "", sprNorm, -1},
	{  911, "", sprNorm, -1},
	{  912, "", sprNorm, -1},
	{  913, "", sprNorm, -1},
	{  914, "", sprNorm, -1},
	{  915, "", sprNorm, -1},
	{  916, "", sprNorm, -1},
	{  917, "", sprNorm, -1},
	{  918, "", sprNorm, -1},
	{  919, "", sprNorm, -1},
	{  920, "", sprNorm, -1},
	{  921, "tsc", sprNorm, -1},
	{  922, "tst", sprNorm, -1},
	{  923, "", sprNorm, -1},
	{  924, "", sprNorm, -1},
	{  925, "", sprNorm, -1},
	{  926, "", sprNorm, -1},
	{  927, "", sprNorm, -1},
	{  928, "ummcr2", sprNorm, -1},
	{  929, "upmc5", sprNorm, -1},
	{  930, "upmc6", sprNorm, -1},
	{  931, "", sprNorm, -1},
	{  932, "", sprNorm, -1},
	{  933, "", sprNorm, -1},
	{  934, "", sprNorm, -1},
	{  935, "ubamr", sprNorm, -1},
	{  936, "ummcr0", sprNorm, -1},
	{  937, "upmc1", sprNorm, -1},
	{  938, "upmc2", sprNorm, -1},
	{  939, "usia", sprNorm, -1},
	{  940, "ummcr1", sprNorm, -1},
	{  941, "upmc3", sprNorm, -1},
	{  942, "upmc4", sprNorm, -1},
	{  943, "usda", sprNorm, -1},
	{  944, "mmcr2", sprPriv, -1},
	{  945, "pmc5", sprPriv, -1},
	{  946, "tlbndxhnt", sprPriv, -1},
	{  947, "tlbndx", sprPriv, -1},
	{  948, "tlbvpn", sprPriv, -1},
	{  949, "tlbrpn", sprPriv, -1},
	{  950, "", sprNorm, -1},
	{  951, "bamr", sprPriv, -1},
	{  952, "mmcr0", sprPriv, -1},
	{  953, "pmc1", sprPriv, -1},
	{  954, "pmc2", sprPriv, -1},
	{  955, "sia", sprPriv, -1},
	{  956, "mmcr1", sprPriv, -1},
	{  957, "pmc3", sprPriv, -1},
	{  958, "pmc4", sprPriv, -1},
	{  959, "sda", sprPriv, -1},
	{  960, "", sprNorm, -1},
	{  961, "", sprNorm, -1},
	{  962, "", sprNorm, -1},
	{  963, "", sprNorm, -1},
	{  964, "", sprNorm, -1},
	{  965, "", sprNorm, -1},
	{  966, "", sprNorm, -1},
	{  967, "", sprNorm, -1},
	{  968, "", sprNorm, -1},
	{  969, "", sprNorm, -1},
	{  970, "", sprNorm, -1},
	{  971, "", sprNorm, -1},
	{  972, "", sprNorm, -1},
	{  973, "", sprNorm, -1},
	{  974, "", sprNorm, -1},
	{  975, "", sprNorm, -1},
	{  976, "trig0", sprPriv, -1},
	{  977, "trig1", sprPriv, -1},
	{  978, "trig2", sprPriv, -1},
	{  979, "hash2", sprPriv, -1},
	{  980, "imiss", sprPriv, -1},
	{  981, "icmp", sprPriv, -1},
	{  982, "rpa", sprPriv, -1},
	{  983, "", sprNorm, -1},
	{  984, "l3pdet", sprPriv, -1},
	{  985, "", sprNorm, -1},
	{  986, "", sprNorm, -1},
	{  987, "", sprNorm, -1},
	{  988, "", sprNorm, -1},
	{  989, "", sprNorm, -1},
	{  990, "", sprNorm, -1},
	{  991, "", sprNorm, -1},
	{  992, "", sprNorm, -1},
	{  993, "", sprNorm, -1},
	{  994, "", sprNorm, -1},
	{  995, "", sprNorm, -1},
	{  996, "", sprNorm, -1},
	{  997, "", sprNorm, -1},
	{  998, "", sprNorm, -1},
	{  999, "", sprNorm, -1},
	{ 1000, "", sprNorm, -1},
	{ 1001, "", sprNorm, -1},
	{ 1002, "", sprNorm, -1},
	{ 1003, "", sprNorm, -1},
	{ 1004, "", sprNorm, -1},
	{ 1005, "", sprNorm, -1},
	{ 1006, "", sprNorm, -1},
	{ 1007, "", sprNorm, -1},
	{ 1008, "hid0", sprPriv, -1},
	{ 1009, "hid1", sprPriv, -1},
	{ 1010, "iabr", sprPriv, -1},
	{ 1011, "ictrl", sprPriv, -1},
	{ 1012, "hid4", sprPriv, -1},
	{ 1013, "dabr", sprPriv, -1},
	{ 1014, "hid5", sprPriv, -1},
	{ 1015, "dabrx", sprPriv, -1},
	{ 1016, "hid2", sprPriv, -1},
	{ 1017, "hid6", sprPriv, -1},
	{ 1018, "hid7", sprPriv, -1},
	{ 1019, "ictc", sprPriv, -1},
	{ 1020, "thrm1", sprPriv, -1},
	{ 1021, "thrm2", sprPriv, -1},
	{ 1022, "thrm3", sprPriv, -1},
	{ 1023, "pir", sprPriv, -1},
};

#define sprmax ((sizeof(sprs) / sizeof(sprtb)) - 1)
