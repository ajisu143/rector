<?php

namespace Rector\Php74\Tests\Rector\FuncCall\ArraySpreadInsteadOfArrayMergeRector\Fixture;

class IteratorToArray
{
    public function run($items)
    {
        $values = iterator_to_array($items);
    }
}

?>
-----
<?php

namespace Rector\Php74\Tests\Rector\FuncCall\ArraySpreadInsteadOfArrayMergeRector\Fixture;

class IteratorToArray
{
    public function run($items)
    {
        $values = [...$items];
    }
}

?>
