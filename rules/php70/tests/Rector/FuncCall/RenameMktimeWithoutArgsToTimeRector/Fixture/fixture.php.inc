<?php

namespace Rector\Php70\Tests\Rector\FuncCall\RenameMktimeWithoutArgsToTimeRector\Fixture;

class SomeClass
{
    public function run()
    {
        $time = mktime(1, 2, 3);
        $nextTime = mktime();
    }
}

?>
-----
<?php

namespace Rector\Php70\Tests\Rector\FuncCall\RenameMktimeWithoutArgsToTimeRector\Fixture;

class SomeClass
{
    public function run()
    {
        $time = mktime(1, 2, 3);
        $nextTime = time();
    }
}

?>
